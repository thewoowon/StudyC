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

// 메인함수
int main(void) 
{
    
    int i, j;

    /*for ( i = 1; i < 10; i++)
    {
        for ( j = 1; j < 10; j++)
        {
            printf("%d * %d = %d\n",i,j,i*j);
        }
        printf("\n");
    }*/
    int sum = 0;
    for ( i = 1; i <= 100; i++)
    {
        if ((i%3)==0)
        {
            continue;
        }
        sum += i;
    }
    printf("sum += %d\n", sum);
	system("pause");
	return EXIT_SUCCESS;
}