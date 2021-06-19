`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:13:16 06/19/2021
// Design Name:   Single_Cpu
// Module Name:   C:/Users/29593/Documents/cyk/computer-system/single_cpu/single_cpu/Single_Cpu_fib_tb.v
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

module Single_Cpu_fib_tb;

	// Inputs
	reg clock;
	reg reset;

	// Outputs
	wire [31:0] data_result;
	wire [31:0] print_data;

	// Instantiate the Unit Under Test (UUT)
	Single_Cpu uut (
		.clock(clock), 
		.reset(reset), 
		.data_result(data_result), 
		.print_data(print_data)
	);

	initial begin
		// Initialize Inputs
		clock = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end

	always begin
		#50; clock = ~clock;
	end
      
endmodule

