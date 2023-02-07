#include "../header/FileReader.h"

FileReader::FileReader(std::string fileName) : FileHandling(fileName)
{

}
void FileReader::open()
{
    std::string fileName=FileHandling::getFileName();
    this->fileStream.open(fileName);
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