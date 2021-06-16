`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:58:59 06/13/2021 
// Design Name: 
// Module Name:    Inst_Rom 
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
module Inst_Rom(
    input           [31:0]                              pc  ,
    output          [31:0]                              instruction 
    );

    reg             [31:0]                              inst_rom    [63:0]    ;

    wire            [5:0]                               addr    ;
    wire            [31:0]                              address ;

    assign address = pc - 32'h0040024;
    assign addr = address[7:2];
    
    initial begin
       $readmemh("instruction.txt", inst_rom); 
    end


    assign instruction = inst_rom[addr];
endmodule
