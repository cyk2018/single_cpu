`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:54:57 06/13/2021 
// Design Name: 
// Module Name:    Single_Cpu 
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
module Single_Cpu(
    input                                               clock   ,
    input                                               reset   ,
    output          [31:0]                              data_result 
    );

    wire            [31:0]                              instruction ;
    wire            [31:0]                              pc_result   ;
    wire            [31:0]                              pc_4    ;
    wire            [5:0]                               func    ;
    wire            [5:0]                               op  ;
    wire            [4:0]                               sa  ;
    wire            [4:0]                               rs  ;
    wire            [4:0]                               rt  ;
    wire            [4:0]                               rd  ;
    wire            [15:0]                              imm ;
    wire            [31:0]                              expand_imm  ;
    wire            [31:0]                              alu_data_1  ;
    wire            [31:0]                              alu_data_2  ;
    wire            [31:0]                              wb_data ;
    wire                                                zero    ;
    wire                                                branch  ;
    wire                                                memread ;
    wire                                                memwrite    ;
    wire                                                memtoreg    ;
    wire                                                jr  ;
    wire            [31:0]                              alu_result  ;
    wire            [31:0]                              reg_data_2  ;
    wire            [31:0]                              mem_read_data   ;

    assign func = instruction[31:26];
    assign op = instruction[5:0];
    assign sa = instruction[10:6];
    assign rs = instruction[25:21];
    assign rt = instruction[20:16];
    assign rd = instruction[15:11];
    assign imm = instruction[15:0];

    Stage_1 Stage_1(
      .clock(clock),
      .reset(reset),
      .instruction(instruction),
      .pc_result(pc_result),
      .pc_4(pc_4)
    );

    Stage_2 Stage_2
    (
        .clock(clock),
        .reset(reset),
        .func(func),
        .op(op),
        .rs(rs),
        .rt(rt),
        .rd(rd),
        .imm(imm),
        .wb_data(wb_data),
        .expand_imm(expand_imm),
        .alu_data_1(alu_data_1),
        .alu_data_2(alu_data_2) ,
        .reg_data_2(reg_data_2),
        .branch(branch),
        .memread(memread),
        .memwrite(memwrite),
        .memtoreg(memtoreg),
        .jr(jr)
    );

    Stage_3 Stage_3(
      .jr(jr),
      .branch(branch),
      .func(func),
      .op(op),
      .sa(sa),
      .rs(rs),
      .alu_data_1(alu_data_1),
      .alu_data_2(alu_data_2),
      .pc_4(pc_4),
      .expand_imm(expand_imm),
      .zero(zero),
      .alu_result(alu_result),
      .pc_result(pc_result)
    );

    Stage_4 Stage_4(
      .reset(reset),
      .clock(clock),
      .reg_data_2(reg_data_2),
      .memread(memread),
      .memwrite(memwrite),
      .alu_result(alu_result),
      .mem_read_data(mem_read_data)
    );

    Stage_5 Stage_5(
      .memtoreg(memtoreg),
      .mem_read_data(mem_read_data),
      .alu_result(alu_result),
      .write_data(wb_data)
    );

    assign data_result = alu_result;

endmodule
