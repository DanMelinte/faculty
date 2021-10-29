module MSB_LSB_tb;
  reg [63:0]in_tb;
  wire[15:0] MSB_tb, MIJLOC_tb, MIJLOC2_tb, LSB_tb;

  
  initial begin
    $monitor("Timp=%d, in_tb=%b, MSV_tb=%b, MIJLOC_tb=%b, MIJLOC2_tb=%b, LSB_tb=%b", $time, in_tb, MSB_tb, MIJLOC_tb, MIJLOC2_tb, LSB_tb);
  end

initial begin
  in_tb=64'b1010101010101010100001110010101011010101010101010100001110010101;
end

MSB_LSB leg(
.in(in_tb),
.MSB(MSB_tb), 
.MIJLOC(MIJLOC_tb), 
.MIJLOC2(MIJLOC2_tb), 
.LSB(LSB_t)
);

endmodule