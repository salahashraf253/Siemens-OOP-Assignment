#include "../header/eCRPIFrame.h"


eCRPIFrame::eCRPIFrame() {

}

eCRPIFrame::~eCRPIFrame() {

}

void eCRPIFrame::setMessageType(std::string messageType) {
    this -> messageType = messageType;
}

void eCRPIFrame::setPayloadSize(std::string payloadSize) {
    this -> payloadSize = payloadSize;
}

void eCRPIFrame::setRtcId(std::string rtcId) {
    this -> rtcId = rtcId;
}

void eCRPIFrame::setSequenceId(std::string sequenceId) {
    this -> sequenceId = sequenceId;
}

void eCRPIFrame::setProtocolVersion(std::string protocolVersion) {
    this -> protocolVersion = protocolVersion;
}

void eCRPIFrame::setConcatenationIndicator(std::string concatenationIndicator) {
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