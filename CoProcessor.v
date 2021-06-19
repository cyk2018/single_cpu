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
    input                                               clock   ,
    input                                               sc  ,
    input           [5:0]                               func,
    input           [5:0]                               op  ,
    input           [4:0]                               rs  ,
    input           [31:0]                              w_data  ,
    output                                              eret    ,
    output          [31:0]                              data    
    );

    reg             [31:0]                              Status  ;
    // assume the least-significant bit as interrupt
    // assume the least-second-significant bit as ERL
    // assume the least-third-significant bit as EXL

    reg             [31:0]                              registers   [3:0];

    reg            [31:0]                              ErrorEPC    ;
    reg            [31:0]                              EPC ;

    assign eret = (op == 6'b011000) ? 1 : 0;

    initial begin
        Status = 32'h0;
        ErrorEPC = 32'h0;
        EPC = 32'h0040024;
    end

    always @(posedge clock) begin
        if(func == 6'b010000)begin
            if(op == 6'b011000)begin
                // eret
                if(Status[1])begin
                    Status[1] = 0;
                end
                else begin
                    Status[2] = 0;
                end
            end

        end
    end
// **************************************************
    always @(negedge clock) begin
        if(func == 6'b010000)begin
            if(rs == 5'b00100)begin
                // mtc0
                registers[0] = w_data;
            end
            else if(rs == 5'b01011)begin
                // di ei
                Status[0] = sc;
            end
        end
    end


    assign data = (rs == 5'b00000) ? registers[0] : ((rs == 5'b01011) ? Status : (Status[1] ? ErrorEPC : EPC));

endmodule
