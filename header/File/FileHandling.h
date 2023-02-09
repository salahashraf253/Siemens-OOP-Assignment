#ifndef UNTITLED_FILEHANDLING_H
#define UNTITLED_FILEHANDLING_H

#include <fstream>
#include <string>

class FileHandling
{
private:
    std::string fileName;

public:
    std::string getFileName();
    virtual void open() = 0;
    virtual bool isGood() = 0;
    virtual void close() = 0;
    FileHandling(std::string);
};

#endif