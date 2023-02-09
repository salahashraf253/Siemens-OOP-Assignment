#include "header/Runner.h"

int main()
{
    Runner runnner;
    runnner.readFrames("input_packets.txt");
    runnner.writeParsedFrames("output_parsed_packets.txt");
    runnner.printParsedFrame();

}