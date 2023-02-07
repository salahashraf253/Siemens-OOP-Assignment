#include"../header/ParserFactory.h"

Parser* ParserFactory::getParser(std::string packetType, std::string rawPacket)
{
    if(packetType=="88F7")
    {
        return new EthernetParser(rawPacket);
    }
    else if(packetType=="AEFE")
    {
        return new EcpriParser(rawPacket);
    }
}
ParserFactory::ParserFactory()
{

}
ParserFactory::~ParserFactory()
{

}