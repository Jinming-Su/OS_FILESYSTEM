/*
*  define some const and struct
*/
#include <stdio.h>
#include "login.c"

#define BLOCKSIZE 1024
#define INODEFREESTACKNUM 10
#define DATABLOCKFREESTACK 10
#define DISKADDRESSNUM 10
#define DIRECTORYITEMLENGTH 20
#define DIRECTORYITEMSIZE 16

#define TRUE 1
#define FALSE 0
#define null ((void *)0)
#define CMDSIZE 20

int username;
FILE * sys;

/*
*  block
*  size: 1024B
*  sumSize: 990KB
*/
struct blcok {
    int id;
	char data[BLOCKSIZE];
};

/*
*  superBlock
*  size: 1024B
*/
struct superBlock {
    int id;
	int iNodeTotalNum;
	int iNodeFreeNum;
	int iNodeFreeStack[INODEFREESTACKNUM];
	int dataBlockTotalNum;
	int dataBlockFreeNum;
	int dataBlockFreeStack[DATABLOCKFREESTACK];
	int superBlockFlag;
}super_block;

/*
*  iNode
*  size: 32B
*  sumSize: 32KB
*/
struct iNode {
    int id;
    int fileCount;
    int size;
    int fileMode;
    int userId;
    int userRight;
    int diskAddress[DISKADDRESSNUM];
};

/*
*  directoryItem
*  size: 16B
*/
struct directoryItem {
    char name[DIRECTORYITEMLENGTH];
    int inode;
};
struct dictory {
    struct directoryItem item[BLOCKSIZE/DIRECTORYITEMSIZE];
};

extern void login();
