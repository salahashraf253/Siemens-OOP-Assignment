#ifndef UNTITLED_FILEREADER_H
#define UNTITLED_FILEREADER_H

#include <fstream>
#include "FileHandling.h"

class FileReader : public FileHandling
{
private:
    std::ifstream fileStream;

public:
    void open() override;
    bool isGood() override;
    std::string readLine();
    void close() override;
    FileReader(std::string);
};
#endif