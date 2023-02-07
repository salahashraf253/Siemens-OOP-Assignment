
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
    /* data */
public:
    eCRPIFrame(/* args */);
    std::string toString() override;
    std::string setMessageType(std::string);
    std::string setPayloadSize(std::string);
    std::string setRtcId(std::string);
    std::string setSequenceId(std::string);
    std::string setProtocolVersion(std::string);
    std::string setConcatenationIndicator(std::string);
    ~eCRPIFrame();
};

