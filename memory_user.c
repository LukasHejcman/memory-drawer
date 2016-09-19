#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>
#include <ctype.h>
#include <errno.h>
#include <string.h>
#include <limits.h>

int main(void)
{
	char *memory;
	size_t amount;

	amount = 2147483648U;
	memory = (char *)malloc(amount *sizeof(*memory));

	if (memory == NULL)
	{
		puts("ERROR: Out of memory!");
		return 1;
	}

	int y;
	int x = 0;

	while 1
	{
		y = int(abs(sin(x)));

		if (amount < y){
			memory = (char *)calloc(y *sizeof(*memory))limits
		}


	}


	sleep(20);
	free(memory);


	/*
	int iP = 1;

	int x = 0;

	while(1){
		int *iP = (int *)malloc(sizeof(int));
		iP[0] = 12344;
		int mlockall(int *iP);

	}


	char *data = new char[1024*1024]; // 1 MB
	BOOL bRet = SetProcessWorkingSetSize(GetCurrentProcess(), 1024*1024*2, 1024*1024*10);
	bRet = VirtualLock(data, 4096*4096); // LOCK into memory!
	bRet = SetProcessWorkingSetSize(GetCurrentProcess(), 0, 0); // WILL FAIL!
	while(1) Sleep(1000);
	*/

	return 0;
}
