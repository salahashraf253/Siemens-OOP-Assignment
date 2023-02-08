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
    std::vector<Frame>parsedFrames;

public:
    Runner();
    ~Runner();
    void readFrames();
    void writeParsedFrames();
};