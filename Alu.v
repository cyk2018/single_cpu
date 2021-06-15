`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:26:41 06/13/2021 
// Design Name: 
// Module Name:    Alu 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Alu(
    input           [5:0]                               func    ,
    input           [5:0]                               op  ,
    input           [4:0]                               sa  ,
    input           [4:0]                               rs  ,
    input           [31:0]                              alu_data_1  ,
    input           [31:0]                              alu_data_2  ,
    output                                              zero    ,
    output  reg     [31:0]                              alu_result  
    );

    reg             [63:0]                              long_operand    ;
    reg             [32:0]                              ex_operand_1   ;
    reg             [32:0]                              ex_operand_2   ;
    reg             [32:0]                              ex_result   ;
    reg                                                overflow    ;

    always @(*) begin
        long_operand = 0;
        overflow = 0;
        case (func)
        6'b000000:
            case (op)
                6'b100100:begin
                    // and
                    alu_result = alu_data_1 & alu_data_2;
                end 
                6'b000000:begin
                    // nop

                    //sll
                    alu_result = alu_data_2 << sa;
                end
                6'b100111:begin
                    // nor
                    alu_result = ~(alu_data_1 | alu_data_2);
                end
                6'b100101:begin
                    // or
                    alu_result = alu_data_1 | alu_data_2;
                end
                6'b000010:begin
                    long_operand[63:32] = alu_data_2;
                    long_operand = long_operand >> sa;
                    if(rs == 5'b00001)begin
                        // rotr
                        alu_result = long_operand[31:0] | long_operand[63:32];
                    end
                    else begin
                        // srl
                        alu_result = long_operand[63:32];
                    end                    
                end
                6'b000110:begin
                    long_operand[63:32] = alu_data_2;
                    long_operand = long_operand >> alu_data_1[4:0];
                    
                    if(sa == 5'b00001)begin
                        // rotrv
                        alu_result = long_operand[31:0] | long_operand[63:32];
                    end
                    else begin
                        alu_result = long_operand[63:32];
                    end
                end
                6'b000100:begin
                    // sllv
                    alu_result = alu_data_2 << alu_data_1[4:0];
                end
                6'b000011:begin
                    // sra
                    alu_result = ($signed(alu_data_2)) >>> sa;
                end
                6'b000111:begin
                    // srav
                    alu_result = ($signed(alu_data_2)) >>> alu_data_1[4:0];
                end
                6'b100110:begin
                    // xor
                    alu_result = alu_data_1 ^ alu_data_2;
                end
                6'b100000:begin
                    // add
                    ex_operand_1 = {alu_data_1[31], alu_data_1[31:0]};
                    ex_operand_2 = {alu_data_2[31], alu_data_2[31:0]};
                    ex_result = ex_operand_1 + ex_operand_2;
                    // <= can not used in control statement
                    if(ex_result[32] != ex_result[31])begin
                        // overflow
                        alu_result = 32'h0;
                        overflow = 1;
                    end
                    else begin
                        alu_result = ex_result[31:0];
                    end
                end
                6'b100001:begin
                    // addu
                    alu_result = alu_data_1 + alu_data_2;
                end
                6'b011010:begin
                    if(sa == 5'b00010)begin
                        // div
                        alu_result = $signed(alu_data_1) / alu_data_2;
                    end
                    else begin
                        // mod
                        alu_result = $signed (alu_data_1) % alu_data_2 ;
                    end
                end
                6'b011011:begin
                    if(sa == 5'b00010)begin
                        // divu
                        alu_result = alu_data_1 / alu_data_2;
                    end
                    else begin
                        // modu
                        alu_result = alu_data_1 % alu_data_2;
                    end
                end
                6'b011000:begin
                    long_operand = $signed (alu_data_1) * $signed (alu_data_2) ; ;
                    if(sa == 5'b00010)begin
                        // mul
                        alu_result = long_operand[31:0];
                    end
                    else begin
                        // muh
                        alu_result = long_operand[63:32];
                    end
                end
                6'b011001:begin
                    long_operand = alu_data_1 * alu_data_2;
                    if(sa == 5'b00010)begin
                        // mulu
                        alu_result = long_operand[31:0];
                    end
                    else begin
                        // muhu
                        alu_result = long_operand[63:32];
                    end
                end
                6'b100010:begin
                    // sub
                    ex_operand_1 = {alu_data_1[31], alu_data_1[31:0]};
                    ex_operand_2 = {alu_data_2[31], alu_data_2[31:0]};
                    ex_result = ex_operand_1 - ex_operand_2;
                    if(ex_result[32] != ex_result[31])begin
                        // overflow
                        overflow = 1;
                        alu_result = 32'h0;
                    end
                    else begin
                        alu_result = ex_result[31:0];
                    end
                end
                6'b100011:begin
                    // subu
                    alu_result = alu_data_1 - alu_data_2;
                end
                6'b101010:begin
                    // slt
                    alu_result = ($signed(alu_data_1) < $signed(alu_data_2)) ? 32'h1 : 32'h0;
                end
                6'b101011:begin
                    // sltu
                    alu_result = (alu_data_1 < alu_data_2) ? 32'h1 : 32'h0;
                end
                6'b001000:begin
                    // jr

                end
                default: alu_result = 32'h0;
            endcase 
        default: alu_result = 32'h0;
        endcase    
    end
    
    assign zero = ~|alu_result;
    
endmodule
