#include"../header/EthernetParser.h"

EthernetParser::EthernetParser(std::string rawPacket):Parser(rawPacket)
{

}
EthernetParser::~EthernetParser()
{

}
EthernetParser::EthernetParser() :Parser()
{

}
std::string EthernetParser::getData()
{
    std::string data=this->rawPacket.substr(46*2,rawPacket.size()-(26*2));
    return data;
}