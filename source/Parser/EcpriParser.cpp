#include "../../header/Parser/EcpriParser.h"

std::string EcpriParser::getConcatenationIndicator()
{
    std::string concatenationIndicator = this->rawPacket.substr(ConcatenationIndicator::startIndex, ConcatenationIndicator::size);
    return concatenationIndicator;
}
std::string EcpriParser::getMessageType()
{
    std::string messageType = this->rawPacket.substr(MessageType::startIndex, MessageType::size);
    return messageType;
}
std::string EcpriParser::getPayloadSize()
{
    std::string payloadSize = this->rawPacket.substr(PayloadSize::startIndex, PayloadSize::size);
    return payloadSize;
}
std::string EcpriParser::getProtocolVersion()
{
    std::string protocolVersion = this->rawPacket.substr(ProtocolVersion::startIndex, ProtocolVersion::size);
    return protocolVersion;
}
std::string EcpriParser::getSequenceId()
{
    std::string sequenceId = this->rawPacket.substr(SequenceId::startIndex, SequenceId::size);
    return sequenceId;
}
std::string EcpriParser::getRtcId()
{
    std::string rtcId = this->rawPacket.substr(RtcId::startIndex, RtcId::size);
    return rtcId;
}
eCRPIFrame *EcpriParser::getParsedFrame()
{
    eCRPIFrame *ecrpiFrame = new eCRPIFrame();
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
    ecrpiFrame->setRawPacket(this->rawPacket);

    return ecrpiFrame;
}