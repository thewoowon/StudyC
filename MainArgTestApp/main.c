/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 //main 함수의 명령행 사용
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - Woo Won
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 메인함수
int main(int argc, char**argv) 
{
    int i;
  

    

    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

   

	system("pause");
	return EXIT_SUCCESS;
}