#include "../../header/Frame/Frame.h"

void Frame::setRawPacket(std::string rawPacket)
{
    this->rawPacket = rawPacket;
}
void Frame::setSourceAddress(std::string sourceAddress)
{
    this->sourceAddress = sourceAddress;
}
void Frame::setDestinationAddress(std::string destinationAddress)
{
    this->destinationAddress = destinationAddress;
}
void Frame::setType(std::string type)
{
    this->type = type;
}
void Frame::setCRC(std::string CRC)
{
    this->CRC = CRC;
}
std::string Frame::toString()
{

    return rawPacket + "\n" +
           "CRC: " + CRC + "\n" +
           "Source Address: " + sourceAddress + "\n" +
           "Destination Address: " + destinationAddress + "\n" +
           "Type: " + type + "\n";
}
