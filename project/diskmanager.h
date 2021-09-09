#ifndef DISK_MANAGER_H
#define DISK_MANAGER_H

using namespace std;

class DiskPartition {
  public:
    char partitionName;
    int partitionSize;
    //add variables as needed to the data structure here.
};

class DiskManager {
  Disk *myDisk;
  int partCount;
  DiskPartition *diskP;

  /* declare other private members here */

  public:
    DiskManager(Disk *d, int partCount, DiskPartition *dp);
    ~DiskManager();
    int readDiskBlock(char partitionname, int blknum, char *blkdata);
    int writeDiskBlock(char partitionname, int blknum, char *blkdata);
    int getBlockSize() {return myDisk->getBlockSize();};
    int getPartitionSize(char partitionname);
    /* declare other public members here  mine*/

};
#endif
