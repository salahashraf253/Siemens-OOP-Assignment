#include "../header/eCRPIFrame.h"


eCRPIFrame::eCRPIFrame() {

}

eCRPIFrame::~eCRPIFrame() {

}

std::string eCRPIFrame::setMessageType(std::string messageType) {
    this -> messageType = messageType;
}

std::string eCRPIFrame::setPayloadSize(std::string payloadSize) {
    this -> payloadSize = payloadSize;
}

std::string eCRPIFrame::setRtcId(std::string rtcId) {
    this -> rtcId = rtcId;
}

std::string eCRPIFrame::setSequenceId(std::string sequenceId) {
    this -> sequenceId = sequenceId;
}

std::string eCRPIFrame::setProtocolVersion(std::string protocolVersion) {
    this -> protocolVersion = protocolVersion;
}

std::string eCRPIFrame::setConcatenationIndicator(std::string concatenationIndicator) {
    this -> concatenationIndicator = concatenationIndicator;
}

std::string eCRPIFrame::toString() {

    return Frame::toString() + 
        "Concatenation Indicator: " + concatenationIndicator + "\n" + 
        "Message Type: " + messageType + "\n" +
        "Payload Size: " + payloadSize + "\n" + 
        "Protocol Version: " + protocolVersion + "\n"
        "RTC ID: " + rtcId + "\n" +
        "Sequence ID: " + sequenceId + "\n";
}