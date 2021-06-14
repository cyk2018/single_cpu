`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:07:12 06/13/2021
// Design Name:   Inst_Rom
// Module Name:   C:/Users/29593/Documents/cyk/computer-system/single_cpu/single_cpu/Inst_Rom_tb.v
// Project Name:  single_cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Inst_Rom
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Inst_Rom_tb;

	// Inputs
	reg [31:0] pc;

	// Outputs
	wire [31:0] instruction;

	// Instantiate the Unit Under Test (UUT)
	Inst_Rom uut (
		.pc(pc), 
		.instruction(instruction)
	);

	initial begin
		// Initialize Inputs
		pc = 0;

		// Wait 100 ns for global reset to finish
		#100;
    
		// Add stimulus here

	end
    always begin
		#100; pc = pc + 4;
	end  
endmodule

