#include "stdlib.h"
#include "stdio.h"
#include <lib.h>

int main(int argc, char*  argv[])	{
	int i = 0;
	int j = 0;
	int a = 0;
	message msg;
	int pid = getpid();
	msg.m1_i1 = pid;
	_syscall(MM,78,&msg);
	a = _syscall(MM,79,&msg);
	printf("%d",a);
	for(i = 0; i < 10000; ++i){
		for(j = 0; j < 10000; ++j)
			++a;
		printf("%s file number, a value = %d.\n", argv[1], a);
	}
	printf("%d",argv[1]);
	return 0;
}
