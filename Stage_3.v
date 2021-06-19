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
    input                                               clock   ,
    input                                               sc  ,
    input                                               j   ,
    input                                               link ,
    input                                               jr  ,
    input                                               branch  ,
    input           [5:0]                               func    ,
    input           [5:0]                               op  ,
    input           [4:0]                               sa  ,
    input           [4:0]                               rs  ,
    input           [4:0]                               rt  ,
    input           [4:0]                               rd  ,
    input           [25:0]                              instr_index ,
    input           [15:0]                              imm ,
    input           [31:0]                              alu_data_1  ,
    input           [31:0]                              alu_data_2  ,
    input           [31:0]                              pc_4    ,
    input           [31:0]                              expand_imm  ,
    output                                              zero    ,
    output          [31:0]                              alu_result  ,
    output  reg     [31:0]                              pc_result   
    );

    wire            [31:0]                              branch_pc   ;
    wire            [31:0]                              result  ;
    wire            [31:0]                              jpc ;
    wire            [31:0]                              cpdata  ;
    wire                                                eret    ;
    wire            [31:0]                              w_cpdata    ;

    Alu Stage_3_Alu(
        .func(func),
        .op(op),
        .sa(sa),
        .rs(rs),
        .rt(rt),
        .rd(rd),
        .imm(imm),
        .alu_data_1(alu_data_1),
        .alu_data_2(alu_data_2),
        .cpdata(cpdata),
        .w_cpdata(w_cpdata),
        .zero(zero),
        .alu_result(result)
    );

    CoProcessor CP0(
        .func(func),
        .clock(clock),
        .sc(sc),
        .op(op),
        .rs(rs),
        .w_data(w_cpdata),
        .eret(eret),
        .data(cpdata)
    );

    assign alu_result = link ? pc_4 : result;

    assign branch_pc = pc_4 + (expand_imm << 2);

    assign jpc = {pc_4[31:28], instr_index, 2'b0};
    
    always @(*) begin
        if(branch & zero)begin
            pc_result = branch_pc;
        end
        else if(jr) begin
            pc_result = alu_data_1;
        end
        else if(j) begin
            pc_result = jpc;
        end
        else if(eret)begin
            pc_result = cpdata;
        end
        else begin
            pc_result = pc_4;
        end
    end

endmodule
