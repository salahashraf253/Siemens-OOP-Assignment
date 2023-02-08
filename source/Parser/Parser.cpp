#include "../../header/Parser/Parser.h"

Parser::Parser()
{
}
Parser::~Parser()
{
}
std::string Parser::getDestinationAddress()
{
    std::string destinationAddress = this->rawPacket.substr(16, 12);
    return destinationAddress;
}
std::string Parser::getSourceAddress()
{
    std::string sourceAddress = this->rawPacket.substr(28, 12);
    return sourceAddress;
}
std::string Parser::getCRC()
{
    std::string crc = this->rawPacket.substr(this->rawPacket.size() - 8);
    return crc;
}
std::string Parser::getType()
{
    std::string type = this->rawPacket.substr(40, 4);
    return type;
}
std::string Parser::getData()
{
    std::string data = this->rawPacket.substr(46 * 2, rawPacket.size() - (26 * 2));
    return data;
}
void Parser::setRawPacket(std::string rawPacket)
{
    this->rawPacket = rawPacket;
}
std::string Parser::getType(std::string rawPacket)
{
    std::string type = rawPacket.substr(40, 4);
    return type;
}