#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>


int main(void)
{
	int i;
	srand((int)time(NULL));
	for (i = 0; i < 5; i++)
	{
		printf("정수 출력 : %d \n", rand());
	}

	return 0;
}
