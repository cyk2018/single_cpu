`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:38:48 06/13/2021 
// Design Name: 
// Module Name:    Memory 
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
module Memory(
    input                                               reset   ,
    input                                               clock   ,
    input           [31:0]                              address ,
    input           [31:0]                              mem_write_data  ,
    input                                               memread ,
    input                                               memwrite    ,
    output          [31:0]                              mem_read_data   
    );

    reg             [63:0]                              mem [31:0];
    
    wire            [5:0]                               addr    ;

    initial begin
        $readmemh("memory.txt", mem);
    end

    assign addr = address[7:2];

    always @(negedge clock) begin
        if(reset)begin
            $readmemh("memory.txt", mem);
        end

        else if(memwrite)begin
            mem[addr] <= mem_write_data;
        end    
    end

    assign mem_read_data = memread ? mem[addr] : 32'h0;


endmodule
