#!/usr/bin/perl
%parameterlist = (
    "N" => "8",
    "k" => "8",
    );

foreach $arg (@ARGV)
{   #print "$arg\n";
    if($arg =~ m/(.*)=(.*)/)
    {
	$parameterlist{$1} = $2;
    }
}

$N= $parameterlist{"N"};
$k= $parameterlist{"k"};

print "medianSort-> N=$N k=$k\n";

createMedianSortBTNCVerilogs();

sub createMedianSortBTNCVerilogs{
    $filename="medianSort_N${N}_k${k}";
    open (myfile, ">${filename}.v");
    print myfile "module $filename ( clk, rst,\n";

    for ($ii = 0; $ii < $N; $ii++){
	print myfile "dataIn$ii, ";
    }
    print myfile "dataOut); \n\n";
    
    print myfile "input clk, rst;\n";
    for($ii = 0; $ii < $N; $ii++){
	print myfile "input [".($k-1).":0] dataIn$ii;\n";
    }
    print myfile "output reg [".($k-1).":0] dataOut;\n\n";

    print myfile "wire comp34;\n wire comp48;\n\n";

    
}
