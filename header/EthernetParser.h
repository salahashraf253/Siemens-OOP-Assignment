#include"Parser.h"
#include<string>

#ifndef UNTITLED_ETHERNETPARSER_H
#define UNTITLED_ETHERNETPARSER_H

class EthernetParser : public Parser
{
private:
    /* data */
public:
    std::string getData();
    EthernetParser(std::string );
    EthernetParser();

    ~EthernetParser();
};
#endif