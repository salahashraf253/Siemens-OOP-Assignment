#include <string>
#include <vector>
#include "FileReader.h"
#include "FileWriter.h"
#include "Frame.h"
#include "ParserFactory.h"

class Runner
{
private:
    std::vector<std::string>rawPackets;
    std::vector<Frame* >parsedFrames;
    void parseFrames();
public:
    Runner();
    ~Runner();
    void readFrames(std:: string);
    void writeParsedFrames(std::string);
    void printParsedFrame();
};