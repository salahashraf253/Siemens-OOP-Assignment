#include "../header/FileHandling.h"
#include <iostream>

FileHandling::FileHandling(std::string fileName)
{
    this->fileName = fileName;
}
std::string FileHandling::getFileName()
{
    return this->fileName;
}
FileHandling::~FileHandling()
{
}
