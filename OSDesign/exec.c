#include <stdio.h>

void init(FILE *sys) {
	if((sys = fopen("system","r"))==NULL) {
		format();
	} else {
		load();
	}
}

void exec(char cmd[]) {
    puts(cmd);
}
