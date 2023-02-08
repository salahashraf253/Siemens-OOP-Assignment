#include "../../header/Parser/ParserFactory.h"

Parser* ParserFactory::getParser(std::string packetType)
{
    if (packetType=="88F7")
    {
        return new EthernetParser();
    }
    else if(packetType=="AEFE")
    {
        return new EcpriParser();
    } else {
        return nullptr;
    }
}
ParserFactory::ParserFactory()
{

}
ParserFactory::~ParserFactory()
{

}