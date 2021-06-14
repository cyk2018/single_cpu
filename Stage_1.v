`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:57:47 06/13/2021 
// Design Name: 
// Module Name:    Stage_1 
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
module Stage_1(
    input                                               clock   ,
    input                                               reset   ,
    input           [31:0]                              pc_result   ,
    output          [31:0]                              instruction ,
    output          [31:0]                              pc_4    
    );

    wire            [31:0]                              pc  ;
    
    Pc Stage_1_Pc(
        .clock(clock),
        .reset(reset),
        .pc_result(pc_result),
        .pc(pc),
        .pc_4(pc_4)
    );

    Inst_Rom Stage_1_Inst_Rom(
        .pc(pc),
        .instruction(instruction)
    );

endmodule
