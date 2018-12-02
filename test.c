#include "stdlib.h"
#include "stdio.h"

int main(int argc, char*  argv[])	{
	int i = 0;
	int j = 0;
	int a = 0;
	for(i = 0; i < 10000; ++i){
		for(j = 0; j < 10000; ++j)
			++a;
		/*printf("%s file number, a value = %d.\n", argv[1], a);*/ 
	}
	printf("%d",argv[1]);
	return 0;
}
