#ifndef UNTITLED_PARSER_H
#define UNTITLED_PARSER_H

#include <string>
#include "../Frame/Frame.h"

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
    Parser();
    ~Parser();
};

#endif