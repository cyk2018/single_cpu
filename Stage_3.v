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
    input                                               branch  ,
    input           [5:0]                               func    ,
    input           [5:0]                               op  ,
    input           [31:0]                              alu_data_1  ,
    input           [31:0]                              alu_data_2  ,
    input           [31:0]                              pc_4    ,
    input           [31:0]                              expand_imm  ,
    output                                              zero    ,
    output          [31:0]                              alu_result  ,
    output          [31:0]                              pc_result   
    );

    wire            [31:0]                              branch_pc   ;

    Alu Stage_3_Alu(
        .func(func),
        .op(op),
        .alu_data_1(alu_data_1),
        .alu_data_2(alu_data_2),
        .zero(zero),
        .alu_result(alu_result)
    );

    assign branch_pc = pc_4 + expand_imm << 2;
    assign pc_result = (branch && zero) ? branch_pc : pc_4;

endmodule
