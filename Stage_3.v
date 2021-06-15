`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:26:24 06/13/2021 
// Design Name: 
// Module Name:    Stage_3 
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
module Stage_3(
    input                                               jr  ,
    input                                               branch  ,
    input           [5:0]                               func    ,
    input           [5:0]                               op  ,
    input           [4:0]                               sa  ,
    input           [4:0]                               rs  ,
    input           [31:0]                              alu_data_1  ,
    input           [31:0]                              alu_data_2  ,
    input           [31:0]                              pc_4    ,
    input           [31:0]                              expand_imm  ,
    output                                              zero    ,
    output          [31:0]                              alu_result  ,
    output  reg     [31:0]                              pc_result   
    );

    wire            [31:0]                              branch_pc   ;

    Alu Stage_3_Alu(
        .func(func),
        .op(op),
        .sa(sa),
        .rs(rs),
        .alu_data_1(alu_data_1),
        .alu_data_2(alu_data_2),
        .zero(zero),
        .alu_result(alu_result)
    );

    assign branch_pc = pc_4 + expand_imm << 2;
    
    always @(*) begin
        if(branch & zero)begin
            pc_result = branch_pc;
        end
        else if(jr) begin
            pc_result = alu_data_1;
        end
        else begin
            pc_result = pc_4;
        end
    end

endmodule
