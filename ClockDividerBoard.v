`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:23:12 06/14/2021 
// Design Name: 
// Module Name:    ClockDividerBoard 
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
module ClockDividerBoard(
    input                                               Reset   ,
    input                                               Clock   , 
    output  reg                                         DividedClock    
    ); 

    parameter                                           COUNTER = 32'hC350;
    reg             [32:0]                              clock_count ;

    initial begin
        clock_count = 32'h0;
        DividedClock = 0;
    end
    
    always @(posedge Clock or posedge Reset)
        if (Reset == 1'b1)
            clock_count <= {32{1'b0}};
        else 
        begin
            clock_count <= clock_count + 1;
            if ( clock_count == COUNTER ) 
            begin
                DividedClock <= ~DividedClock;
                clock_count <= {32{1'b0}};
            end
        end
endmodule
