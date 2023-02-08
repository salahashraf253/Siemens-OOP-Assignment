#include"../../header/File/FileWriter.h"


FileWriter::FileWriter(std::string fileName) : FileHandling(fileName)
{

}
void FileWriter::open()
{
    std::string fileName=FileHandling::getFileName();
    this->fileStream.open(fileName);
}
bool FileWriter::isGood()
{
    return this->fileStream.good();
}
void FileWriter::write(std::string lineToWrite)
{
    this->fileStream<<lineToWrite;
}
void FileWriter::close()
{
    this->fileStream.close();
}
FileWriter::~FileWriter()
{
}