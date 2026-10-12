#include <stdio.h>

int Add1(int num1, int num2)
{
	return num1 + num2;
}

int main10(void)
{
	int result;
	result = Add1(3, 4);
	printf("덧셈결과1: %d\n", result);
	result = Add1(5, 8);
	printf("덧셈결과2: %d\n", result);
	return 0;
}