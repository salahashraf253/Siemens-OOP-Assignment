#include"../header/EthernetParser.h"

EthernetParser::EthernetParser():Parser()
{

}
EthernetParser::~EthernetParser()
{

}
Frame* EthernetParser::getParsedFrame()
{

    return new EthernetFrame();
}
