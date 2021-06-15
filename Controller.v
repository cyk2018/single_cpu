`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:08:34 06/13/2021 
// Design Name: 
// Module Name:    Controller 
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
module Controller(
    input           [5:0]                               func    ,
    input           [5:0]                               op  ,
    output  reg                                         regdst  ,
    output  reg                                         branch  ,
    output  reg                                         memread ,
    output  reg                                         memwrite    ,
    output  reg                                         memtoreg    ,
    output  reg                                         alusrc  ,
    output  reg                                         regwrite    ,
    output  reg                                         expand  ,
    output  reg                                         jr
    );


    always @(*) begin
        regdst = 1; // write rd
        branch = 0;
        memread = 0;
        memwrite = 0;
        memtoreg = 0; // memory useless
        alusrc = 0; // register data
        regwrite = 1;
        expand = 0;
        jr = 0;

        case (func)
            6'b000000: begin
                case (op)
                    6'b100100:begin
                        // and

                    end
                    6'b000000:begin
                        // nop
                        
                        //sll

                    end
                    6'b100111:begin
                        // nor

                    end
                    6'b100101:begin
                        // or

                    end
                    6'b000010:begin
                        // rotr
                        
                    end
                    6'b000110:begin
                        // rotrv

                    end
                    6'b000100:begin
                        // sllv

                    end
                    6'b000011:begin
                        // sra

                    end
                    6'b000111:begin
                        // srav

                    end
                    6'b100000:begin
                        // add

                    end
                    6'b100001:begin
                        // addu

                    end
                    6'b011010:begin
                        // div

                        // mod

                    end
                    6'b011011:begin
                        // divu

                        // modu

                    end
                    6'b011000:begin
                        // mul

                        //muh

                    end
                    6'b011001:begin
                        // mulu

                        // muhu

                    end
                    6'b100010:begin
                        // sub

                    end
                    6'b100011:begin
                        // subu

                    end
                    6'b101010:begin
                        // slt

                    end
                    6'b101011:begin
                        // sltu

                    end
                    6'b001000:begin
                        jr = 1;
                    end
                endcase
            end
        endcase

    end


endmodule
