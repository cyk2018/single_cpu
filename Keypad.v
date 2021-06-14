`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:31:29 06/13/2021 
// Design Name: 
// Module Name:    Keypad 
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
module Keypad(
    input                                               Reset_N   ,
    input                                               Clock   ,
    input           [3:0]                               Row ,
    output          [3:0]                               Col ,
    output  reg     [7:0]                               KeypadData  
    );

    reg                                                 ready_0 ;
    reg             [3:0]                               column  ;

    initial begin
        column = 4'b1110;
    end

    always @(posedge Clock) begin
        case( column )
        4'b1110 :
            case( Row )
            4'b1110 : begin KeypadData <= 8'h_1 ; ready_0 <= 1 ; end
            4'b1101 : begin KeypadData <= 8'h_4 ; ready_0 <= 1 ; end
            4'b1011 : begin KeypadData <= 8'h_7 ; ready_0 <= 1 ; end
            4'b0111 : begin KeypadData <= 8'h_0 ; ready_0 <= 1 ; end
            default : begin ready_0 <= 0 ; end
            endcase
        4'b1101:
            case( Row )
            4'b1110 : begin KeypadData <= 8'h_2 ; ready_0 <= 1 ; end
            4'b1101 : begin KeypadData <= 8'h_5 ; ready_0 <= 1 ; end
            4'b1011 : begin KeypadData <= 8'h_8 ; ready_0 <= 1 ; end
            4'b0111 : begin KeypadData <= 8'h_f ; ready_0 <= 1 ; end
            default : begin ready_0 <= 0 ; end
            endcase
        4'b1011:
            case( Row )
            4'b1110 : begin KeypadData <= 8'h_3 ; ready_0 <= 1 ; end
            4'b1101 : begin KeypadData <= 8'h_6 ; ready_0 <= 1 ; end
            4'b1011 : begin KeypadData <= 8'h_9 ; ready_0 <= 1 ; end
            4'b0111 : begin KeypadData <= 8'h_e ; ready_0 <= 1 ; end
            default : begin ready_0 <= 0 ; end
            endcase
        4'b0111:
            case( Row )
            4'b1110 : begin KeypadData <= 8'h_a ; ready_0 <= 1 ; end
            4'b1101 : begin KeypadData <= 8'h_b ; ready_0 <= 1 ; end
            4'b1011 : begin KeypadData <= 8'h_c ; ready_0 <= 1 ; end
            4'b0111 : begin KeypadData <= 8'h_d ; ready_0 <= 1 ; end
            default : begin ready_0 <= 0 ; end
            endcase
        endcase

        column <= {column[2:0], column[3]};
    end

    assign Col = column;
endmodule
