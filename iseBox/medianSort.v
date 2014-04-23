//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:47:56 04/15/2014 
// Design Name: 
// Module Name:    medianSort 
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
module medianSort(
	dataIn0, dataIn1,
	dataOut0, dataOut1
);
parameter DATA_SIZE = 8;	 
	 
input 		[DATA_SIZE - 1:0] dataIn0;
input 		[DATA_SIZE - 1:0] dataIn1;
output reg 	[DATA_SIZE - 1:0] dataOut0;
output reg 	[DATA_SIZE - 1:0] dataOut1;

reg comp;

always @(*) begin
// mod00
	comp 	= dataIn0 > dataIn1;  // dataIn0 = 0, dataIn1 = 1
	dataOut0		= comp ? dataIn0 : dataIn1;
	dataOut1	 	= comp ? dataIn1 : dataIn0;
	//if(dataIn0 > dataIn1) begin
		//dataOut0 = dataIn0;
		//dataOut1 = dataIn1;
	//end else begin
		//dataOut0 = dataIn1;
		//dataOut1 = dataIn0;
	//end
end

endmodule
