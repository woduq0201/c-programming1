#include <stdio.h>

void Add2(int val);
int num;

int main16(void)
{
	printf("num : %d \n", num);
	Add2(3);
	printf("num: %d \n", num);
	num++;
	printf("num: %d \n", num);
	return 0;
}

void Add2(int val)
{
	num += val;
}
