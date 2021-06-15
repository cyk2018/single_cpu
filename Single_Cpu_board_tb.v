`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:38:00 06/14/2021
// Design Name:   Single_Cpu_board
// Module Name:   C:/Users/29593/Documents/cyk/computer-system/single_cpu/single_cpu/Single_Cpu_board_tb.v
// Project Name:  single_cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Single_Cpu_board
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Single_Cpu_board_tb;

	// Inputs
	reg CLK;
	reg [5:0] Switch;

	// Outputs
	wire [7:0] Segs;
	wire [5:0] En;

	// Instantiate the Unit Under Test (UUT)
	Single_Cpu_board uut (
		.CLK(CLK), 
		.Switch(Switch), 
		.Segs(Segs), 
		.En(En)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;
		Switch = 6'b111111;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end

	always begin
		#50; CLK = ~CLK;
	end
      
endmodule

