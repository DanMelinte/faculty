module MSB_LSB(
  input [63:0]in,
  output reg [15:0] MSB, MIJLOC, MIJLOC2, LSB
  );
  
  always @(in) begin 
    MSB[15:0]=in[63:48]; 
    MIJLOC[15:0]=in[47:32];
    MIJLOC2[15:0]=in[31:16];
    LSB[15:0]=in[15:0];
  end
endmodule