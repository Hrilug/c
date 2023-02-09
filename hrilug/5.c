#include <stdio.h>
#include <stdint.h>

void main()
{
	char key[3][10]={"hello","world"};
	printf("%s %s\n", key[0][2],key[1][1]);
}