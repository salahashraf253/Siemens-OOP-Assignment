#include "../../header/Parser/ParserFactory.h"

std::string ParserFactory::ethernetFrameType = "88F7";
std::string ParserFactory::ecpriFrameType = "AEFE";

Parser *ParserFactory::getParser(std::string packetType)
{
    if (packetType == ethernetFrameType)
    {
        return new EthernetParser();
    }
    else if (packetType == ecpriFrameType)
    {
        return new EcpriParser();
    }
    return nullptr;
}
