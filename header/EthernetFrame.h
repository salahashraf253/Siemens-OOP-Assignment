#include <string>
#include "./Frame.h"

class EthernetFrame: public Frame
{
private:
public:
    EthernetFrame(/* args */);
    std::string toString() override;
    ~EthernetFrame();
};
