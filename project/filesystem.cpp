#include "disk.h"
#include "diskmanager.h"
#include "partitionmanager.h"
#include "filesystem.h"
#include <time.h>
#include <cstdlib>
#include <iostream>
using namespace std;


FileSystem::FileSystem(DiskManager *dm, char fileSystemName)
{

}

int FileSystem::createFile(char *filename, int fnameLen)
{
 return -1; //place holder so there is no warnings when compiling.
}

int FileSystem::createDirectory(char *dirname, int dnameLen)
{
 return -1; //place holder so there is no warnings when compiling.
}

int FileSystem::lockFile(char *filename, int fnameLen)
{
 return -1; //place holder so there is no warnings when compiling.
}

int FileSystem::unlockFile(char *filename, int fnameLen, int lockId)
{
 return -1; //place holder so there is no warnings when compiling.
}

int FileSystem::deleteFile(char *filename, int fnameLen)
{
 return -1; //place holder so there is no warnings when compiling.
}

int FileSystem::deleteDirectory(char *dirname, int dnameLen)
{
 return -1; //place holder so there is no warnings when compiling.
}

int FileSystem::openFile(char *filename, int fnameLen, char mode, int lockId)
{
 return -1; //place holder so there is no warnings when compiling.
}

int FileSystem::closeFile(int fileDesc)
{
 return -1; //place holder so there is no warnings when compiling.
}

int FileSystem::readFile(int fileDesc, char *data, int len)
{
  return 0; //place holder so there is no warnings when compiling.
}

int FileSystem::writeFile(int fileDesc, char *data, int len)
{
  return 0; //place holder so there is no warnings when compiling.
}

int FileSystem::appendFile(int fileDesc, char *data, int len)
{
 return -1; //place holder so there is no warnings when compiling.
}

int FileSystem::truncFile(int fileDesc, int offset, int flag)
{
 return -1; //place holder so there is no warnings when compiling.
}

int FileSystem::seekFile(int fileDesc, int offset, int flag)
{
 return -1; //place holder so there is no warnings when compiling.
}

int FileSystem::renameFile(char *filename1, int fnameLen1, char *filename2, int fnameLen2)
{
 return -1; //place holder so there is no warnings when compiling.
}

int FileSystem::renameDirectory(char *dirname1, int dnameLen1, char *dirname2, int dnameLen2)
{
 return -1; //place holder so there is no warnings when compiling.
}

int FileSystem::getAttribute(char *filename, int fnameLen /* ... and other parameters as needed */)
{
 return -1; //place holder so there is no warnings when compiling.
}

int setAttribute(char *filename, int fnameLen /* ... and other parameters as needed */)
{
 return -1; //place holder so there is no warnings when compiling.
}
