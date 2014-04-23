`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:12:25 04/15/2014 
// Design Name: 
// Module Name:    medianSort_tb 
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
module medianSort_tb(
    );
parameter	CLKTB_HALF_PERIOD	= 5; // produces 200MHz clock
parameter	RST_DEASSERT_DLY	= 50;
parameter 	SAMPLE_SIZE			= 10;

reg			clk, rst;
reg 	[7:0] data [0:SAMPLE_SIZE*10 - 1];
wire	[7:0] dataOut;
reg 	[7:0]	dataIn0;
reg 	[7:0]	dataIn1;
reg 	[7:0]	dataIn2;
reg 	[7:0]	dataIn3;
reg 	[7:0]	dataIn4;
reg 	[7:0]	dataIn5;
reg 	[7:0]	dataIn6;
reg 	[7:0]	dataIn7;
reg 	[7:0]	dataIn8;

integer ii;

initial $readmemh("/home/mustafa/Dropbox/qtWorkspace/ee562Project/randomNumberGenerator/build-randNumGen-Desktop_Qt_5_2_1_GCC_64bit-Debug/data.txt", data);

// Instantiate the Unit Under Test (UUT)
medianSort_top medianSort_top_UUT(.clk(clk), .rst(rst), 
											 .dataIn0(dataIn0), .dataIn1(dataIn1), 
											 .dataIn2(dataIn2), .dataIn3(dataIn3), 
											 .dataIn4(dataIn4), .dataIn5(dataIn5),
											 .dataIn6(dataIn6), .dataIn7(dataIn7),
											 .dataIn8(dataIn8), .dataOut(dataOut)
);

// Generate clk
//******************
initial begin
	clk = 1'b0;
	forever begin
		#CLKTB_HALF_PERIOD clk	= ~clk; // 200MHz clk
	end
end

// Generate resetb
//******************
initial begin
	rst								= 1'b1;
	#RST_DEASSERT_DLY	rst		= 1'b0;
end

initial begin
	//datasize = data[0];
	repeat(6) @(posedge clk);
	
	ii = 0;
	repeat(SAMPLE_SIZE) begin
		dataIn0 <= #1 data[ii];
		dataIn1 <= #1 data[ii+1];
		dataIn2 <= #1 data[ii+2];
		dataIn3 <= #1 data[ii+3];
		dataIn4 <= #1 data[ii+4];
		dataIn5 <= #1 data[ii+5];
		dataIn6 <= #1 data[ii+6];
		dataIn7 <= #1 data[ii+7];
		dataIn8 <= #1 data[ii+8];
		ii = ii + 10;
		repeat(2)@(posedge clk);
	end
end

initial begin
	repeat(100) @(posedge clk);
	$finish;
end

endmodule
