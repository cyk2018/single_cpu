`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:58:09 06/13/2021 
// Design Name: 
// Module Name:    Pc 
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
module Pc(
    input                                               clock   ,
    input                                               reset   ,
    input           [31:0]                              pc_result   ,
    output          [31:0]                              pc  ,
    output          [31:0]                              pc_4    
    );

    reg             [31:0]                              new_pc  ;

    initial begin
        new_pc = 32'h00400024;
        //qtspim start from 0040024
    end

    always @(posedge clock or posedge reset) begin
        if(reset) begin
            new_pc = 32'h0040024;
        end
        else begin
            new_pc = pc_result;
        end
    end

    assign pc_4 = pc + 4;
    assign pc = new_pc;

endmodule
