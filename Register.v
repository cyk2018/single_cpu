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
        registers[0] = 32'h00000000;
        registers[1] = 32'h00000001;
        registers[2] = 32'h00000002;
        registers[3] = 32'h00000003;
        registers[4] = 32'h00000004;
        registers[5] = 32'h00000005;
        registers[6] = 32'h00000006;
        registers[7] = 32'h00000007;
        registers[8] = 32'h00000008;
    end

    always @(negedge clock or posedge reset) begin
        // negetive edge write
        if(regwrite)begin
            registers[register_w] <= write_data;
        end
        if(reset)begin
            registers[0] <= 32'h00000000;
            registers[1] <= 32'h00000001;
            registers[2] <= 32'h00000002;
            registers[3] <= 32'h00000003;
            registers[4] <= 32'h00000004;
            registers[5] <= 32'h00000005;
            registers[6] <= 32'h00000006;
            registers[7] <= 32'h00000007;
            registers[8] <= 32'h00000008;
        end
    end

    assign reg_data_1 = registers[register_1];
    assign reg_data_2 = registers[register_2];


endmodule
