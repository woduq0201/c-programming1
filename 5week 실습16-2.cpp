#include <stdio.h>

int Add(int val);
int num1 = 1;

int main162(void)
{
	int num1 = 5;
	printf("num: %d \n", Add(3));
	printf("num: %d \n", num1 + 9);
	return 0;
}

int Add(int val)
{
	int num = 9;
	num += val;
	return num;
}