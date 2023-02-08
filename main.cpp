#include <iostream>
#include "header/Runner.h"

int main()
{
    Runner runnner;
    std::cout << "Hello\n";
    runnner.readFrames("input_packets.txt");
    runnner.writeParsedFrames("Somehting.txt");
    runnner.printParsedFrame();

}