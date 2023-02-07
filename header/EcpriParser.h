#include"Parser.h"
#include<string>

#ifndef UNTITLED_ECPRIPARSER_H
#define UNTITLED_ECPRIPARSER_H

class EcpriParser : public Parser
{
private:
    /* data */
public:
    std::string getConcatenationIndicator();
    std::string getMessageType();
    std::string getPayloadSize();
    std::string getProtocolVersion();
    std::string getSequenceId();
    std::string getRtcId();
    EcpriParser(std::string rawPacket);
    ~EcpriParser();
};

#endif 