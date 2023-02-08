#include "Parser.h"
#include "../Frame/Frame.h"
#include "../Frame/eCRPIFrame.h"
#include <string>

#ifndef UNTITLED_ECPRIPARSER_H
#define UNTITLED_ECPRIPARSER_H

class EcpriParser : public Parser
{
private:
    std::string getConcatenationIndicator();
    std::string getMessageType();
    std::string getPayloadSize();
    std::string getProtocolVersion();
    std::string getSequenceId();
    std::string getRtcId();

public:
    eCRPIFrame *getParsedFrame() override;
    EcpriParser();
    ~EcpriParser();
};

#endif