`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:46:01 06/13/2021 
// Design Name: 
// Module Name:    Stage_5 
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
module Stage_5(
    input                                               memtoreg    ,
    input           [31:0]                              mem_read_data   ,
    input           [31:0]                              alu_result  ,
    output          [31:0]                              write_data  
    );

    assign write_data = memtoreg ? mem_read_data : alu_result;
    // memtoreg is 1 show that read data from mem to reg

endmodule
