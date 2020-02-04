/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.03
  writer - Woo Won.
*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>



// 메인함수
int main(void) 
{
    /*char str[80] = "appleJam";
    int res;
    printf("최초 문자열 : %s\n", str);
    printf("문자열 입력  : ");
    res = scanf("%s", str);
    printf("입력 후 문자열 : %s\n", str);*/

    char str1[80] = "Cat";
    char str2[80];

    strcpy(str1, "Tiger");
    strcpy(str2, str1);
    printf("%s, %s\n", str1, str2);

	system("pause");
	return EXIT_SUCCESS;
}