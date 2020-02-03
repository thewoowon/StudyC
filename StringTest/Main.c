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
	printf("대존맛 과일 : %s\n\n\n", fruit);


	

	char grade;
	char name[20];

	printf("학점을 입력하세요 : ");
	scanf_s("%c", &grade);
	getchar();
	printf("성함을 입력하세요 : ");
	scanf_s("%s", &name);
	printf("님의 학점은 입니다\n");
	printf("%s님의 학점은 %c입니다\n", name, grade);


	system("pause");
	return 0;
}