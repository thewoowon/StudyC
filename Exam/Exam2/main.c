/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.13
  writer - Woo Won
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// 메인함수
int main(void) 
{
	int  ref, res;
	char grade[5] = { 'A','B','C','D','F' };


	printf("점수를 입력하세요 : ");
	scanf("%d", &ref);

	res = ref / 10;


	if (res>=9)
	{
		printf("이번 등급은 %c입니다. 축하드려요~\n",'A');
	}
	else if (res>=7)
	{
		printf("이번 등급은 %c입니다. 조금만 더~~\n", 'B');
	}
	else if (res >=6)
	{
		printf("이번 등급은 %c입니다. 아쉬워요~~\n", 'C');
	}
	else if (res >= 6)
	{
		printf("이번 등급은 %c입니다. 노력하세요~\n", 'D');
	}
	else
	{
		printf("이번 등급은 %c입니다. 분발하세요!\n", 'F');
	}
		

	system("pause");
	return EXIT_SUCCESS;
}