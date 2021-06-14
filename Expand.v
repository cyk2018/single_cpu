`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:16:55 06/13/2021 
// Design Name: 
// Module Name:    Expand 
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
module Expand(
    input           [15:0]                              imm ,
    input                                               expand  ,
    output          [31:0]                              expand_imm
    );

    assign expand_imm = expand ? {{16{imm[15]}}, imm} : {16'h0, imm};

endmodule
