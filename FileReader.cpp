#include "FileReader.h"

FileReader::FileReader(std::string fileName)
{
    this->fileName = fileName;
}
void FileReader::open()
{
    this->fileStream.open(this->fileName);
}
bool FileReader::isGood()
{
    return this->fileStream.good();
}
std::string FileReader::readLine()
{
    std::string line;
    std::getline(this->fileStream, line);
    return line;
}
void FileReader::close()
{
    this->fileStream.close();
}
FileReader::~FileReader()
{
}