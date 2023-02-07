#include"../header/Parser.h"


Parser::Parser(std::string rawPacket)
{
    this->rawPacket=rawPacket;
}
Parser::Parser()
{

}
Parser::~Parser()
{

}
std::string Parser::getDestinationAddress()
{
    std::string destinationAddress=this->rawPacket.substr(16,12);
    return destinationAddress; 
}
std::string Parser::getSourceAddress()
{
    std::string sourceAddress=this->rawPacket.substr(28,12);
    return sourceAddress; 
}
std::string Parser::getCRC()
{
    std::string crc=this->rawPacket.substr(this->rawPacket.size()- 8);
    return crc;
}
std::string Parser::getType()
{
    std::string type=this->rawPacket.substr(40,4);
    return type;
}