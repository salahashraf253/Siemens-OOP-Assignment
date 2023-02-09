#ifndef UNTITLED_PARSERFACTORY_H
#define UNTITLED_PARSERFACTORY_H
#include <string>
#include "Parser.h"
#include "EthernetParser.h"
#include "EcpriParser.h"

class ParserFactory
{
private:
    static std::string ethernetFrameType;
    static std::string ecpriFrameType;

public:
    static Parser *getParser(std::string packetType);
};

#endif