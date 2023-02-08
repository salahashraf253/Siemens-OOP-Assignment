#include"../header/Runner.h"
#include<iostream>
using namespace std;

Runner::Runner()
{

}
Runner::~Runner()
{
}
void Runner::readFrames()
{
    FileReader fileToRead("input_packets.txt");
    fileToRead.open();
    while (fileToRead.isGood())
    {
        std::string rawPacket=fileToRead.readLine();
        this->rawPackets.push_back(rawPacket);
    }
    fileToRead.close();
}
//Tobe completed 
void Runner::writeParsedFrames()
{
    ParserFactory factory;    
    for(size_t i=0;i<rawPackets.size();i++)
    {
        // Parser parser(rawPackets[i]);   
        Parser *unknownParser=factory.getParser(Parser::getType(rawPackets[i]));
        unknownParser->setRawPacket(rawPackets[i]);
        cout<<unknownParser->getType();
        // this->parsedFrames[i]=(Frame*)unknownParser->getParsedFrame();
        // cout<<&(unknownParser->getParsedFrame());
        // void *x=unknownParser->getParsedFrame();
        // x=(Frame *)x;
        // cout<<x->toString();
        break;
    }
}