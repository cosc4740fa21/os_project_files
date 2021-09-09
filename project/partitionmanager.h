#ifndef PARTITION_MANAGER_H
#define PARTITION_MANAGER_H

#include "diskmanager.h"
#include "bitvector.h"


class PartitionManager {
  DiskManager *myDM;
 
  /* declare other private members here */


  public:
    char myPartitionName;
    int myPartitionSize;
    PartitionManager(DiskManager *dm, char partitionname, int partitionsize);
    ~PartitionManager();
    int readDiskBlock(int blknum, char *blkdata);
    int writeDiskBlock(int blknum, char *blkdata);
    int getBlockSize();
    int getFreeDiskBlock();
    int returnDiskBlock(int blknum);
    /* declare other public members here */

};
#endif
