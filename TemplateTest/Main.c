#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNING
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h>


int main()
{

	printf("Hello World!\n");
	
	int i = 0;
	char c = "0";
	printf("�Է��ϼ��� : ");
	scanf_s("%c", &c);
	printf("Value is %c\n", c);
	system("pause");
	
	return 0;
}