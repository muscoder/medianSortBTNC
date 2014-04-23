//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:52:25 04/15/2014 
// Design Name: 
// Module Name:    medianSort_top 
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
module medianSort_top( clk, rst, 
							  dataIn0, dataIn1, 
							  dataIn2, dataIn3, 
							  dataIn4, dataIn5,
							  dataIn6, dataIn7,
							  dataIn8, dataOut
);
parameter DATA_SIZE = 8;	 
	 
input 		clk, rst;
input 		[DATA_SIZE - 1:0] 	dataIn0;
input 		[DATA_SIZE - 1:0] 	dataIn1;
input 		[DATA_SIZE - 1:0] 	dataIn2;
input 		[DATA_SIZE - 1:0] 	dataIn3;
input 		[DATA_SIZE - 1:0] 	dataIn4;
input 		[DATA_SIZE - 1:0] 	dataIn5;
input 		[DATA_SIZE - 1:0] 	dataIn6;
input 		[DATA_SIZE - 1:0] 	dataIn7;
input 		[DATA_SIZE - 1:0] 	dataIn8;
output reg	[DATA_SIZE - 1:0] 	dataOut;

wire comp34;
wire comp48;
//reg comp34;
//reg comp48;

wire [DATA_SIZE-1:0] mx01;
wire [DATA_SIZE-1:0] mn01;
wire [DATA_SIZE-1:0] mx23;
wire [DATA_SIZE-1:0] mn23;
wire [DATA_SIZE-1:0] mx45;
wire [DATA_SIZE-1:0] mn45;
wire [DATA_SIZE-1:0] mx67;
wire [DATA_SIZE-1:0] mn67;
wire [DATA_SIZE-1:0] mxAB;
wire [DATA_SIZE-1:0] mnAB;
wire [DATA_SIZE-1:0] mxCD;
wire [DATA_SIZE-1:0] mnCD;
wire [DATA_SIZE-1:0] mxEF;
wire [DATA_SIZE-1:0] mnEF;
wire [DATA_SIZE-1:0] mxGH;
wire [DATA_SIZE-1:0] mnGH;
wire [DATA_SIZE-1:0] mxA1B1;
wire [DATA_SIZE-1:0] mnA1B1;
wire [DATA_SIZE-1:0] mxC1D1;
wire [DATA_SIZE-1:0] mnC1D1;
wire [DATA_SIZE-1:0] mxE1F1;
wire [DATA_SIZE-1:0] mnE1F1;
wire [DATA_SIZE-1:0] mxG1H1;
wire [DATA_SIZE-1:0] mnG1H1;
wire [DATA_SIZE-1:0] mxA2B2;
wire [DATA_SIZE-1:0] mnA2B2;
wire [DATA_SIZE-1:0] mxC2D2;
wire [DATA_SIZE-1:0] mnC2D2;
wire [DATA_SIZE-1:0] mxE2F2;
wire [DATA_SIZE-1:0] mnE2F2;
wire [DATA_SIZE-1:0] mxG2H2;
wire [DATA_SIZE-1:0] mnG2H2;
wire [DATA_SIZE-1:0] mnA3B3;
wire [DATA_SIZE-1:0] mnC3D3;
wire [DATA_SIZE-1:0] mxE3F3;
wire [DATA_SIZE-1:0] mxG3H3;
wire [DATA_SIZE-1:0] mxC4D4;
wire [DATA_SIZE-1:0] mnA4B4;

medianSort medianSort_00(.dataIn0(dataIn0), .dataIn1(dataIn1), .dataOut0(mx01), .dataOut1(mn01));
medianSort medianSort_10(.dataIn0(dataIn2), .dataIn1(dataIn3), .dataOut0(mn23), .dataOut1(mx23));
medianSort medianSort_20(.dataIn0(dataIn4), .dataIn1(dataIn5), .dataOut0(mx45), .dataOut1(mn45));
medianSort medianSort_30(.dataIn0(dataIn6), .dataIn1(dataIn7), .dataOut0(mn67), .dataOut1(mx67));
medianSort medianSort_01(.dataIn0(mx01), .dataIn1(mx23), .dataOut0(mxAB), .dataOut1(mnAB));
medianSort medianSort_11(.dataIn0(mn01), .dataIn1(mn23), .dataOut0(mxCD), .dataOut1(mnCD));
medianSort medianSort_21(.dataIn0(mx45), .dataIn1(mx67), .dataOut0(mnEF), .dataOut1(mxEF));
medianSort medianSort_31(.dataIn0(mn45), .dataIn1(mn67), .dataOut0(mnGH), .dataOut1(mxGH));
medianSort medianSort_02(.dataIn0(mxAB), .dataIn1(mxCD), .dataOut0(mxA1B1), .dataOut1(mnA1B1));
medianSort medianSort_12(.dataIn0(mnAB), .dataIn1(mnCD), .dataOut0(mxC1D1), .dataOut1(mnC1D1));
medianSort medianSort_22(.dataIn0(mxEF), .dataIn1(mxGH), .dataOut0(mnE1F1), .dataOut1(mxE1F1));
medianSort medianSort_32(.dataIn0(mnEF), .dataIn1(mnGH), .dataOut0(mnG1H1), .dataOut1(mxG1H1));
medianSort medianSort_03(.dataIn0(mxA1B1), .dataIn1(mxE1F1), .dataOut0(mxA2B2), .dataOut1(mnA2B2));
medianSort medianSort_13(.dataIn0(mnA1B1), .dataIn1(mnE1F1), .dataOut0(mxC2D2), .dataOut1(mnC2D2));
medianSort medianSort_23(.dataIn0(mxC1D1), .dataIn1(mxG1H1), .dataOut0(mxE2F2), .dataOut1(mnE2F2));
medianSort medianSort_33(.dataIn0(mnC1D1), .dataIn1(mnG1H1), .dataOut0(mxG2H2), .dataOut1(mnG2H2));
medianSort medianSort_04(.dataIn0(mxA2B2), .dataIn1(mxE2F2), .dataOut0(), .dataOut1(mnA3B3));
medianSort medianSort_14(.dataIn0(mxC2D2), .dataIn1(mxG2H2), .dataOut0(), .dataOut1(mnC3D3));
medianSort medianSort_24(.dataIn0(mnA2B2), .dataIn1(mnE2F2), .dataOut0(mxE3F3), .dataOut1());
medianSort medianSort_34(.dataIn0(mnC2D2), .dataIn1(mnG2H2), .dataOut0(mxG3H3), .dataOut1());
medianSort medianSort_15(.dataIn0(mnA3B3), .dataIn1(mnC3D3), .dataOut0(), .dataOut1(mnA4B4));
medianSort medianSort_25(.dataIn0(mxE3F3), .dataIn1(mxG3H3), .dataOut0(mxC4D4), .dataOut1());

assign comp34 = mnA4B4 > mxC4D4;
assign comp48 = mxC4D4 > dataIn8;

always @(*) begin
	dataOut = dataIn8;
	casex({comp34, comp48})
		2'b1x: dataOut = mnA4B4;
	   2'bx0: dataOut = mxC4D4;
	endcase
end

/*always @(*) begin
	comp34		= (mnA4B4 > mxC4D4);
	comp48		= (mxC4D4 > dataIn8);
	dataOut		= (({comp34,comp48} == 2'b10) || ({comp34,comp48} == 2'b11))? mnA4B4 : 0;
	dataOut 	= (({comp34,comp48} == 2'b00) || ({comp34,comp48} == 2'b10))? mxC4D4 : 0;
	dataOut		= ({comp34,comp48} == 2'b00) ? dataIn8 : 0;
end*/

/*always@(*) begin
	//comp34 	= mnA4B4 > mxC4D4; // mnA4B4 -> 3, mxC4D4 -> 4
	//comp48 	= mxC4D4 > dataIn8; // mxC4D4 -> 4, dataIn8 -> 8
	if(({mnA4B4 > mxC4D4, mxC4D4 > dataIn8} == 2'b10) || ({mnA4B4 > mxC4D4,mxC4D4 > dataIn8} == 2'b11)) begin
		dataOut = mnA4B4;
	end else if(({mnA4B4 > mxC4D4, mxC4D4 > dataIn8} == 2'b00) || ({mnA4B4 > mxC4D4,mxC4D4 > dataIn8} == 2'b10)) begin
		dataOut = mxC4D4;
	end else if({mnA4B4 > mxC4D4, mxC4D4 > dataIn8} == 2'b01) begin
		dataOut = dataIn8;
	end
end*/


endmodule
