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
    input                                               clock   ,
    input           [5:0]                               func    ,
    input           [5:0]                               op  ,
    output  reg                                         regdst  ,
    output  reg                                         branch  ,
    output  reg                                         memread ,
    output  reg                                         memwrite    ,
    output  reg                                         memtoreg    ,
    output  reg                                         alusrc  ,
    output  reg                                         regwrite    ,
    output  reg                                         expand  
    );


    always @(posedge clock) begin
        regdst = 1; // write rd
        branch = 0;
        memread = 0;
        memwrite = 0;
        memtoreg = 0; // memory useless
        alusrc = 0; // register data
        regwrite = 1;
        expand = 0;

        case (func)
            6'b000000: begin
                case (op)
                    6'b100100:begin
                        // and

                    end
                    6'b000000:begin
                        // nop
                        regwrite = 0;
                    end
                endcase
            end
        endcase

    end


endmodule
