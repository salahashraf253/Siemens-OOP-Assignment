#include <fstream>

class FileReader
{
private:
    std::string fileName;
    std::ifstream fileStream;

public:
    void open();
    bool isGood();
    std::string readLine();
    void close();
    FileReader(std::string);
    ~FileReader();
};
