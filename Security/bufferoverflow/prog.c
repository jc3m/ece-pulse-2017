#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void winner()
{
    printf("Winner!\n");
}

void read()
{
	char buf[8];
	gets(buf);
}

int main()
{
	read();
	return 0;
}
