#include <string.h>
#include <stdio.h>
#include "FILESYSTEM.H"

int main()
{
    //(1) login
	login(&username);
    printf("welcome %d!\n",username);

    //(2) init
    init();

	/*while(TRUE) {
		char cmd[CMDSIZE];
		gets(cmd);
		exec(cmd);
	}*/
}
