#include "../../header/Parser/Parser.h"

std::string Parser::getDestinationAddress()
{
    std::string destinationAddress = this->rawPacket.substr(DestinationAddress::startIndex, DestinationAddress::size);
    return destinationAddress;
}
std::string Parser::getSourceAddress()
{
    std::string sourceAddress = this->rawPacket.substr(SourceAddress::startIndex, SourceAddress::size);
    return sourceAddress;
}
std::string Parser::getCRC()
{
    int startIndex=this->rawPacket.size() - CRC::size;
    std::string crc = this->rawPacket.substr(startIndex);
    return crc;
}
std::string Parser::getType()
{
    std::string type = this->rawPacket.substr(FrameType::startIndex, FrameType::size);
    return type;
}
void Parser::setRawPacket(std::string rawPacket)
{
    this->rawPacket = rawPacket;
}
std::string Parser::getType(std::string rawPacket)
{
    std::string type = rawPacket.substr(FrameType::startIndex, FrameType::size);
    return type;
}