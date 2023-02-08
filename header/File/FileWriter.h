#include <fstream>
#include "FileHandling.h"

#ifndef UNTITLED_FILEWRITER_H
#define UNTITLED_FILEWRITER_H

class FileWriter : public FileHandling
{
private:
    std::ofstream fileStream;

public:
    void open() override;
    bool isGood() override;
    void write(std::string);
    void close() override;
    FileWriter(std::string);
    ~FileWriter();
};
#endif