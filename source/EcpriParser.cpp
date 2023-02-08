#include"../header/EcpriParser.h"
#include<iostream>

// EcpriParser::EcpriParser(std::string rawPacket):Parser(rawPacket)
// {
//     // std::cout<<"Message type: "<<this->getMessageType()<<"\n";
//     // std::cout<<"Payload size: "<<this->getPayloadSize()<<"\n";
//     // std::cout<<"Protocol version: "<<this->getProtocolVersion()<<"\n";
//     // std::cout<<"Sequence Id: "<<this->getSequenceId()<<"\n";
//     // std::cout<<"RTC Id: "<<this->getRtcId()<<"\n";
//     // std::cout<<"concatenation Indicator : "<<this->getConcatenationIndicator()<<"\n";
// }
EcpriParser::EcpriParser()
{

}
EcpriParser::~EcpriParser()
{

}
std::string EcpriParser::getConcatenationIndicator()
{
    std::string concatenationIndicator=this->rawPacket.substr(45,1);
    return concatenationIndicator;
}
std::string EcpriParser::getMessageType()
{
    std::string messageType=this->rawPacket.substr(46,2);
    return messageType;
}
std::string EcpriParser::getPayloadSize()
{
    std::string payloadSize=this->rawPacket.substr(48,4);
    return payloadSize;
}
std::string EcpriParser::getProtocolVersion()
{
    std::string protocolVersion=this->rawPacket.substr(44,1);
    return protocolVersion;
}
std::string EcpriParser::getSequenceId()
{
    std::string sequenceId=this->rawPacket.substr(56,4);
    return sequenceId;
}
std::string EcpriParser::getRtcId()
{
    std::string rtcId=this->rawPacket.substr(52,4);
    return rtcId;
}
Frame* EcpriParser::getParsedFrame()
{
    eCRPIFrame *ecrpiFrame=new eCRPIFrame();
    ecrpiFrame->setCRC(this->getCRC());
    ecrpiFrame->setConcatenationIndicator(this->getConcatenationIndicator());
    ecrpiFrame->setDestinationAddress(this->getDestinationAddress());
    ecrpiFrame->setMessageType(this->getMessageType());
    ecrpiFrame->setPayloadSize(this->getPayloadSize());
    ecrpiFrame->setProtocolVersion(this->getProtocolVersion());
    ecrpiFrame->setRtcId(this->getRtcId());
    ecrpiFrame->setSequenceId(this->getSequenceId());
    ecrpiFrame->setSourceAddress(this->getSourceAddress());
    ecrpiFrame->setType(this->getType());
    return ecrpiFrame;
}