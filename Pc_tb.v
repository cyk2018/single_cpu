`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:51:02 06/13/2021
// Design Name:   Pc
// Module Name:   C:/Users/29593/Documents/cyk/computer-system/single_cpu/single_cpu/Pc_tb.v
// Project Name:  single_cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Pc
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Pc_tb;

	// Inputs
	reg clock;
	reg reset;

	// Outputs
	wire [31:0] pc;

	// Instantiate the Unit Under Test (UUT)
	Pc uut (
		.clock(clock), 
		.reset(reset), 
		.pc(pc)
	);

	initial begin
		// Initialize Inputs
		clock = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#500;
        reset = 1;
		// Add stimulus here

	end

	always begin
		#50; clock = ~clock;
	end
      
endmodule

