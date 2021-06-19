`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:41:07 06/13/2021 
// Design Name: 
// Module Name:    Stage_2 
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
module Stage_2(
    input                                               clock   ,
    input                                               reset   ,
    input           [5:0]                               func    ,
    input           [5:0]                               op  ,
    input           [4:0]                               rs  ,
    input           [4:0]                               rt  ,
    input           [4:0]                               rd  ,
    input           [15:0]                              imm ,
    input           [31:0]                              wb_data ,
    output          [31:0]                              expand_imm  ,
    output          [31:0]                              alu_data_1  ,
    output          [31:0]                              alu_data_2  ,
    output          [31:0]                              reg_data_2  ,
    output                                              branch  ,
    output                                              memread ,
    output                                              memwrite    ,
    output                                              memtoreg    ,
    output                                              jr  ,
    output                                              mem_signed  ,
    output          [1:0]                               mem_length  ,
    output                                              link ,
    output                                              j   
    );
    
    wire            [4:0]                              rw  ;
    wire                                                regdst  ;
    wire                                                alusrc  ;
    wire                                                regwrite    ;
    wire                                                expand  ;
    wire            [31:0]                              reg_data_1  ;

    assign rw = regdst ? rd : (link ? 31 : rt);

    Register Stage_2_Register(
        .clock       (clock),
        .reset       (reset),
        .register_1  (rs),
        .register_2  (rt),
        .register_w  (rw),
        .write_data  (wb_data),
        .regwrite    (regwrite),
        .reg_data_1  (reg_data_1),
        .reg_data_2  (reg_data_2)
    );

    Controller Stage_2_Controller
    (
        .rs(rs),
        .rd(rd),
        .rt(rt),
        .func    (func    ),
        .op      (op),
        .regdst  (regdst  ),
        .branch  (branch  ),
        .memread (memread ),
        .memwrite(memwrite),
        .memtoreg(memtoreg),
        .alusrc  (alusrc  ),
        .regwrite(regwrite),
        .expand  (expand),
        .jr(jr),
        .mem_signed(mem_signed),
        .mem_length(mem_length),
        .link(link),
        .j(j)
    );

    Expand Stage_2_Expand(
        .imm(imm),
        .expand(expand),
        .expand_imm(expand_imm)
    );

    assign alu_data_1 = reg_data_1;
    assign alu_data_2 = alusrc ? expand_imm : reg_data_2;


endmodule
