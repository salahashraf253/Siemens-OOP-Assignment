#include "../header/Runner.h"
#include<iostream>

Runner::Runner()
{

}
Runner::~Runner()
{
}

void Runner::readFrames(std::string filename)
{
    FileReader fileToRead("input_packets.txt");
    fileToRead.open();
    while (fileToRead.isGood())
    {
        std::string rawPacket=fileToRead.readLine();
        this->rawPackets.push_back(rawPacket);
    }
    fileToRead.close();

    parseFrames();
}

void Runner::parseFrames() {
    ParserFactory factory;    
    for(size_t i=0;i < rawPackets.size();i++)
    {
        Parser *unknownParser = factory.getParser(Parser::getType(rawPackets[i]));
        unknownParser -> setRawPacket(rawPackets[i]);
        Frame* parsedFrame = unknownParser -> getParsedFrame();
        parsedFrames.push_back(parsedFrame);

    }
}
void Runner::writeParsedFrames(std::string filename)
{      
    FileWriter fileToWrite(filename);
    fileToWrite.open();

    for(int i = 0; i < parsedFrames.size(); ++i) {
        fileToWrite.write("Packet # " + std::to_string(i) + "\n");
        fileToWrite.write(parsedFrames[i] -> toString());
        if(i != parsedFrames.size() - 1) {
            fileToWrite.write(std::string(150, '*') + "\n");
        }
    }
    fileToWrite.close();
}

void Runner::printParsedFrame() {

    for(int i = 0; i < parsedFrames.size(); ++i) {
        std::cout << "Packet # " << i << "\n";
        std::cout << parsedFrames[i] -> toString();
        std::cout << " -------------- \n"; 
    }
}