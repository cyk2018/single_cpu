`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:17:00 06/14/2021 
// Design Name: 
// Module Name:    Single_Cpu_board 
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
module Single_Cpu_board(
    input                                               CLK ,
    input           [5:0]                               Switch  ,
    output          [7:0]                               Segs    ,
    output          [5:0]                               En
    );

    wire            [23:0]                              data    ;
    wire                                                Clock   ;

    ClockDivider Input_ClockDivider
    (
        .Reset(1'b0), 
        .Clock(CLK), 
        .DividedClock(ClockInput)
    );

    ClockDividerBoard M1_ClockDivider(.Reset(1'b0), 
    .Clock(CLK), .DividedClock(Clock));
    //delay the clock
    
    SevenSegsController M2_SevenSegsController(
    .Reset(1'b0), .Clock(Clock), 
    .DisplayEnables(Switch), 
    .Data(data), .SevenSegsAndPoint(Segs), .ShowOneofSix(En));

    Single_Cpu Single_Cpu_real(
        .clock(ClockInput),
        .reset(1'b0),
        .data_result(data)
    );

endmodule