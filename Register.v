`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:49:09 06/13/2021 
// Design Name: 
// Module Name:    Register 
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
module Register(
    input                                               clock   ,
    input                                               reset   ,
    input           [4:0]                               register_1  ,
    input           [4:0]                               register_2  ,
    input           [4:0]                               register_w  ,
    input           [31:0]                              write_data  ,
    input                                               regwrite    ,
    output          [31:0]                              reg_data_1  ,
    output          [31:0]                              reg_data_2
    );

    reg             [31:0]                              registers   [31:0];

    initial begin
        $readmemh("registers.txt", registers);
    end

    always @(negedge clock) begin
        // negetive edge write
        if(reset)begin
            $readmemh("registers.txt", registers);
        end
        else if(regwrite & |register_w)begin // not write zero register
            registers[register_w] = write_data;
        end
    end

    assign reg_data_1 = registers[register_1];
    assign reg_data_2 = registers[register_2];


endmodule
