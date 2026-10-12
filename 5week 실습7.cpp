#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main7(void)
{
	char sel;
	printf("M 오전, A 오후 , E 저녁 \n");
	printf("입력: ");
	scanf("%c", &sel);

	switch (sel)
	{
	case'M':
	case 'm':
		printf("Morning \n");
		break;
	case 'a':
	case'A':
		printf("Afternoon \n");
		break;
	case 'E':
	case 'e':
		printf("Evening \n");
		break;
	}
	return 0;
}
