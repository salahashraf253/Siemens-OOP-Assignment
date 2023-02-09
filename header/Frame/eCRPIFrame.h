
#include <string>
#include "./Frame.h"

class eCRPIFrame: public Frame
{
private:
    std::string messageType;
    std::string payloadSize;
    std::string rtcId;
    std::string sequenceId;
    std::string protocolVersion;
    std::string concatenationIndicator;
public:
    std::string toString() override;
    void setMessageType(std::string);
    void setPayloadSize(std::string);
    void setRtcId(std::string);
    void setSequenceId(std::string);
    void setProtocolVersion(std::string);
    void setConcatenationIndicator(std::string);
};

