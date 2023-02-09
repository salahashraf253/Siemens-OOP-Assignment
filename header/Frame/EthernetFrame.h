#ifndef __ETHERNETFRAME
#define __ETHERNETFRAME

#include <string>
#include "./Frame.h"
class EthernetFrame: public Frame
{
private:
public:
    std::string toString() override;
};


#endif