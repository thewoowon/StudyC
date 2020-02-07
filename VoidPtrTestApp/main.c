/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수/ 동적 메모리 할당
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - Woo Won.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int* pd;
    int i, sum;

    pd = (int*)malloc(5 * sizeof(int));
    if (pd == NULL)
    {
        printf("메모리가 부족합니다.\n");
        exit(1);
    }


    printf("다섯 명의 나이를 입력하세요.: ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &pd[i]);;
        sum += pd[i];
    }

    printf("다섯 명의 평균 나이 : %.1lf\n", (sum / 5.0));
    free(pd);
    

	system("pause");
	return EXIT_SUCCESS;
}