/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수/ 문자학습
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - Woo Won.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int num, grade;
    char temp;

    printf("학번 입력 : ");
    scanf("%d", &num);
    temp= getchar();
    printf("temp : %c", temp);
    printf("학점 입력 : ");
    grade = getchar();
    printf("학번 : %d, 학점 : %c\n", num, grade);
    printf("\n");

	system("pause");
	return EXIT_SUCCESS;
}