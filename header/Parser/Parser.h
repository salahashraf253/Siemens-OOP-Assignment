#ifndef UNTITLED_PARSER_H
#define UNTITLED_PARSER_H

#include <string>
#include "../Frame/Frame.h"
#include "../FrameFields/ConcatenationIndicator.h"
#include "../FrameFields/CRC.h"
#include "../FrameFields/DestinationAddress.h"
#include "../FrameFields/FrameType.h"
#include "../FrameFields/MessageType.h"
#include "../FrameFields/PayloadSize.h"
#include "../FrameFields/ProtocolVersion.h"
#include "../FrameFields/RtcId.h"
#include "../FrameFields/SequenceId.h"
#include "../FrameFields/SourceAddress.h"

class Parser
{
protected:
    std::string rawPacket;

public:
    std::string getDestinationAddress();
    std::string getSourceAddress();
    std::string getCRC();
    std::string getType();
    static std::string getType(std::string);
    std::string getData();
    void setRawPacket(std::string rawPacket);
    virtual Frame *getParsedFrame() = 0;
};

#endif