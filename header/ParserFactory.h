#include<string>
#include"Parser.h"
#include"EthernetParser.h"
#include"EcpriParser.h"

#ifndef UNTITLED_PARSERFACTORY_H
#define UNTITLED_PARSERFACTORY_H

class ParserFactory
{
public:
    Parser* getParser(std::string packetType,std::string rawPacket);
    ParserFactory();
    ~ParserFactory();
};

#endif