#ifndef UNTITLED_ETHERNETPARSER_H
#define UNTITLED_ETHERNETPARSER_H

#include "Parser.h"
#include <string>
#include "../Frame/Frame.h"
#include "../Frame/EthernetFrame.h"

class EthernetParser : public Parser
{
public:
    EthernetFrame *getParsedFrame() override;
    EthernetParser();
    ~EthernetParser();
};
#endif