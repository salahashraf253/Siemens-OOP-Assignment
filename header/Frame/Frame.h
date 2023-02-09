#include <string>

#ifndef __FRAME
#define __FRAME

class Frame
{
private:
    std::string rawPacket;
    std::string sourceAddress;
    std::string destinationAddress;
    std::string type;
    std::string CRC;
public:
    virtual std::string toString();
    void setRawPacket (std::string);
    void setSourceAddress (std::string);
    void setDestinationAddress (std::string);
    void setType (std::string);
    void setCRC (std::string);
};

#endif 