#include <string>

#ifndef UNTITLED_PARSER_H
#define UNTITLED_PARSER_H

class Parser
{
protected:
    std::string rawPacket;
public:
    std::string getDestinationAddress();
    std::string getSourceAddress();
    std::string getCRC();
    std::string getType();
    Parser(std::string);
    Parser();
    ~Parser();
};

#endif