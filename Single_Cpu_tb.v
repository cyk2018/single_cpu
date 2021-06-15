`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:14:50 06/14/2021
// Design Name:   Single_Cpu
// Module Name:   C:/Users/29593/Documents/cyk/computer-system/single_cpu/single_cpu/Single_Cpu_tb.v
// Project Name:  single_cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Single_Cpu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Single_Cpu_tb;

	// Inputs
	reg clock;
	reg reset;

	// Outputs
	wire [31:0] data_result;

	// Instantiate the Unit Under Test (UUT)
	Single_Cpu uut (
		.clock(clock), 
		.reset(reset), 
		.data_result(data_result)
	);

	initial begin
		// Initialize Inputs
		clock = 0;
		reset = 1;

		// Wait 100 ns for global reset to finish
		#100;
        reset = 0;
		// Add stimulus here
		#1000;
		reset = 1;

		#100; reset = 0;
	end
    always begin
		#50; clock = ~clock;
	end 
endmodule

