#include"../header/EthernetParser.h"

EthernetParser::EthernetParser():Parser()
{

}
EthernetParser::~EthernetParser()
{

}
EthernetFrame* EthernetParser::getParsedFrame()
{
    EthernetFrame* ethernetFrame = new EthernetFrame();

    ethernetFrame->setCRC(this->getCRC());
    ethernetFrame->setDestinationAddress(this->getDestinationAddress());
    ethernetFrame->setSourceAddress(this->getSourceAddress());
    ethernetFrame->setType(this->getType());
    ethernetFrame->setRawPacket(this -> rawPacket);
    return ethernetFrame;
}
