#include <stdio.h>
/*
* format()
* format the disk
* (1)init block
* (2)init superBlock; include init
* (3)init iNode
*/
void format() {
    //(1) mkdir 'system'

    //(2) init above
    super_block.id = 1;
    super_block.iNodeTotalNum = 1000;
    super_block.iNodeFreeNum = 1000;
    memset(super_block.iNodeFreeStack, -1 ,sizeof(super_block.iNodeFreeStack));
    super_block.dataBlockTotalNum = 990;
    super_block.dataBlockFreeNum = 990;
    memset(super_block.dataBlockFreeStack, -1, sizeof(super_block.dataBlockFreeStack));
    super_block.superBlockFlag = 0;
    //(3) write back to disk
};

/*
*  load()
*  if the disk has been formated, we need to load
*/
void load() {
    // read back to struct
};
