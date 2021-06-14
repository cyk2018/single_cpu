`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:26:41 06/13/2021 
// Design Name: 
// Module Name:    Alu 
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
module Alu(
    input           [5:0]                               func    ,
    input           [5:0]                               op  ,
    input           [31:0]                              alu_data_1  ,
    input           [31:0]                              alu_data_2  ,
    output                                              zero    ,
    output  reg     [31:0]                              alu_result  
    );

    
    always @(*) begin
        case (func)
        6'b000000:
            case (op)
                6'b100100:begin
                    //and
                    alu_result = alu_data_1 && alu_data_2;
                end 
                default: alu_result = 32'h0;
            endcase 
        default: alu_result = 32'h0;
        endcase    
    end
    
    assign zero = ~|alu_result;
    
endmodule
