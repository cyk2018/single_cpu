`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:38:48 06/13/2021 
// Design Name: 
// Module Name:    Memory 
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
module Memory(
    input           [1:0]                               mem_length  ,
    input                                               mem_signed  ,
    input                                               reset   ,
    input                                               clock   ,
    input           [31:0]                              address ,
    input           [31:0]                              mem_write_data  ,
    input                                               memread ,
    input                                               memwrite    ,
    output  reg     [31:0]                              mem_read_data   
    );

    reg             [7:0]                              mem [63:0];
    reg             [7:0]                               mem_unit    ;
    
    wire            [5:0]                               addr    ;

    initial begin
        $readmemb("memory.txt", mem);
    end

    assign addr = address[5:0];

    always @(negedge clock) begin
        if(reset)begin
            $readmemb("memory.txt", mem);
        end

        else if(memwrite)begin
            case (mem_length)
                2'b01: begin
                    // sb
                    mem[addr] = mem_write_data[7:0];
                end
                2'b10:begin
                    // sh
                    mem[addr] = mem_write_data[15:8];
                    mem[addr + 1] = mem_write_data[7:0];
                end
                2'b11:begin
                    // sw
                    mem[addr] = mem_write_data[31:24];
                    mem[addr + 1] = mem_write_data[23:15];
                    mem[addr + 2] = mem_write_data[15:8];
                    mem[addr + 3] = mem_write_data[7:0];
                end
            endcase
        end    
    end

    always @(*) begin
        if(memread)begin
            mem_unit = mem[addr];
            case (mem_length)
                2'b01: begin
                    mem_read_data =  mem_signed ? {{24{mem_unit[7]}}, mem_unit} : {24'b0, mem_unit};
                end
                2'b10:begin
                    mem_read_data = mem_signed ? {{16{mem_unit[7]}}, mem_unit, mem[addr + 1]} : {16'b0, mem_unit, mem[addr + 1]};
                end
                2'b11:begin
                    mem_read_data = {mem[addr], mem[addr + 1], mem[addr + 2], mem[addr + 3]};
                end
            endcase    
        end
    end


endmodule
