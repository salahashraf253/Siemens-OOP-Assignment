#include <string>
#include <vector>
#include "./File/FileReader.h"
#include "./File/FileWriter.h"
#include "./Frame/Frame.h"
#include "./Parser/ParserFactory.h"

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