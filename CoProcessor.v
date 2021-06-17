`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:58:13 06/16/2021 
// Design Name: 
// Module Name:    CoProcessor 
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
module CoProcessor(
    input                                               sc  ,
    input           [5:0]                               op  ,
    input           [4:0]                               rs  ,
    input           [31:0]                              w_data  ,
    output                                              eret    ,
    output  reg     [31:0]                              data    
    );

    reg             [31:0]                              Status  ;
    // assume the least-significant bit as interrupt
    // assume the least-second-significant bit as ERL
    // assume the least-third-significant bit as EXL

    reg             [31:0]                              registers   [3:0];

    wire            [31:0]                              ErrorEPC    ;
    wire            [31:0]                              EPC ;

    assign eret = (op == 6'b011000) ? 1 : 0;

    always @(clock) begin
        if(op == 6'b011000)begin
            if(rs == 5'b01011)begin
                eret = 1;
                if(Status[1])begin
                    Status[1] = 0;
                    data = ErrorEPC;
                end
                else begin
                    Status[2] = 0;
                    data = EPC;
                end
            end
            else if(rs == 5'b00000) begin
                // mfc0
                data = registers[0];
            end
            else if(rs == 5'b00100) begin
                // mtc0
                registers[0] = w_data;
            end
            
        end
        else begin
            data = Status;
            Status[0] = sc;
        end
        
    end

endmodule
