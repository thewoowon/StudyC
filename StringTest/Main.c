#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNING
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h>


int main()
{

	printf("Hello World!\n");

	char fruit[20] = "strawberry";

	printf("%s\n", fruit);
	printf("%s %s\n\n", fruit, "Jam");

	strcpy(fruit, "water melon");
	printf("������ ���� : %s\n\n\n", fruit);


	

	char grade;
	char name[20];

	printf("������ �Է��ϼ��� : ");
	scanf_s("%c", &grade);
	getchar();
	printf("������ �Է��ϼ��� : ");
	scanf_s("%s", &name);
	printf("���� ������ �Դϴ�\n");
	printf("%s���� ������ %c�Դϴ�\n", name, grade);


	system("pause");
	return 0;
}