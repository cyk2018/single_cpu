`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:37:55 06/13/2021 
// Design Name: 
// Module Name:    Stage_4 
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
module Stage_4(
    input                                               clock   ,
    input           [31:0]                              reg_data_2  ,
    input                                               memread ,
    input                                               memwrite    ,
    input           [31:0]                              alu_result  ,
    output          [31:0]                              mem_read_data   
    );

    Memory Stage_4_Memory(
        .clock(clock),
        .address(alu_result),
        .mem_write_data(reg_data_2),
        .memread(memread),
        .memwrite(memwrite),
        .mem_read_data(mem_read_data)
    );

endmodule
