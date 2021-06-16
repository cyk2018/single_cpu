`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:08:34 06/13/2021 
// Design Name: 
// Module Name:    Controller 
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
module Controller(
    input           [4:0]                               rt  ,
    input           [4:0]                               rd  ,
    input           [5:0]                               func    ,
    input           [5:0]                               op  ,
    output  reg                                         regdst  ,
    output  reg                                         branch  ,
    output  reg                                         memread ,
    output  reg                                         memwrite    ,
    output  reg                                         memtoreg    ,
    output  reg                                         alusrc  ,
    output  reg                                         regwrite    ,
    output  reg                                         expand  ,
    output  reg                                         jr  ,
    output  reg     [1:0]                               mem_length  ,
    output  reg                                         mem_signed  ,
    output  reg                                         link ,
    output  reg                                         j   
    );


    always @(*) begin
        regdst = 1; // write rd
        branch = 0;
        memread = 0;
        memwrite = 0;
        memtoreg = 0; // memory useless
        alusrc = 0; // register data
        regwrite = 1;
        expand = 0;
        jr = 0;
        mem_length = 2'b00;
        // 00 mean not
        // 01 mean byte
        // 10 mean half word
        // 11 mean word
        mem_signed = 0;
        link = 0;
        j = 0;

        case (func)
            6'b000000: begin
                case (op)
                    6'b100100:begin
                        // and

                    end
                    6'b000000:begin
                        // nop
                        
                        //sll

                    end
                    6'b100111:begin
                        // nor

                    end
                    6'b100101:begin
                        // or

                    end
                    6'b000010:begin
                        // rotr
                        
                    end
                    6'b000110:begin
                        // rotrv

                    end
                    6'b000100:begin
                        // sllv

                    end
                    6'b000011:begin
                        // sra

                    end
                    6'b000111:begin
                        // srav

                    end
                    6'b100000:begin
                        // add

                    end
                    6'b100001:begin
                        // addu

                    end
                    6'b011010:begin
                        // div

                        // mod

                    end
                    6'b011011:begin
                        // divu

                        // modu

                    end
                    6'b011000:begin
                        // mul

                        //muh

                    end
                    6'b011001:begin
                        // mulu

                        // muhu

                    end
                    6'b100010:begin
                        // sub

                    end
                    6'b100011:begin
                        // subu

                    end
                    6'b101010:begin
                        // slt

                    end
                    6'b101011:begin
                        // sltu

                    end
                    6'b001000:begin
                        // jr
                        jr = 1;
                        regwrite = 0;
                    end
                    6'b001001:begin
                        // jalr
                        jr = 1;
                        regwrite = 0;
                        link = 1;
                    end
                endcase
            end
            6'b001111:begin
                // lui
                regdst = 0;
            end
            6'b001100:begin
                // andi
                regdst = 0;
                alusrc = 1;
            end
            6'b001101:begin
                // ori
                regdst = 0;
                alusrc = 1;
            end
            6'b001110:begin
                // xori
                regdst = 0;
                alusrc = 1;
            end
            6'b100000:begin
                // lb
                regdst = 0;
                expand = 1;
                alusrc = 1;
                memread = 1;
                mem_length = 2'b01;
                mem_signed = 1;
                memtoreg = 1;
            end
            6'b100100:begin
                // lbu
                regdst = 0;
                expand = 1;
                alusrc = 1;
                memread = 1;
                mem_length = 2'b01;
                memtoreg = 1;
            end
            6'b101000:begin
                // sb
                regdst = 0;
                expand = 1;
                alusrc = 1;
                memwrite = 1;
                regwrite = 0;
                mem_length = 2'b01;
            end
            6'b100001:begin
                // lh
                regdst = 0;
                expand = 1;
                alusrc = 1;
                memread = 1;
                mem_length = 2'b10;
                mem_signed = 1;
                memtoreg = 1;
            end
            6'b100101:begin
                // lhu
                regdst = 0;
                expand = 1;
                alusrc = 1;
                memread = 1;
                mem_length = 2'b10;
                memtoreg = 1;
            end
            6'b101001:begin
                // sh
                regdst = 0;
                expand = 1;
                alusrc = 1;
                memwrite = 1;
                regwrite = 0;
                mem_length = 2'b10;
            end
            6'b100011:begin
                // lw
                regdst = 0;
                expand = 1;
                alusrc = 1;
                memread = 1;
                mem_length = 2'b11;
                memtoreg = 1;
            end
            6'b101011:begin
                // sw
                regdst = 0;
                expand = 1;
                alusrc = 1;
                memwrite = 1;
                regwrite = 0;
                mem_length = 2'b11;
            end
            6'b001000:begin
                // addi
                regdst = 0;
                expand = 1;
                alusrc = 1;
            end
            6'b001001:begin
                // addiu
                regdst = 0;
                expand = 1;
                alusrc = 1;
            end
            6'b001010:begin
                // slti
                regdst = 0;
                expand = 1;
                alusrc = 1;
            end
            6'b001011:begin
                // sltiu
                regdst = 0;
                expand = 1;
                alusrc = 1;
            end
            6'b000100:begin
                // b beq
                regwrite = 0;
                expand = 1;
                branch = 1;
            end
            6'b000001:begin
                branch = 1;
                alusrc = 1;
                if(rt == 5'b10001)begin
                    // bal bgezal
                    link = 1;
                    regdst = 0;
                    regwrite = 1;
                end
                else begin
                    // bgez bltz
                    regwrite = 0;
                end
            end
            6'b000111:begin
                // bgtz
                regwrite = 0;
                branch = 1;
            end
            6'b000110:begin
                // blez
                branch = 1;
                regwrite = 0;
            end
            6'b000101:begin
                // bne
                branch = 1;
                regwrite = 0;
            end
            6'b000010:begin
                // j
                regwrite = 0;
                j = 1;
            end
            6'b000011:begin
                // jal
                j = 1;
                regdst = 0;
                link = 1;
            end
        endcase

    end


endmodule
