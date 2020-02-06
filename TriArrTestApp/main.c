/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수// 3차원 배열
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - Woo Won.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <dos.h>
// 메인함수
int main(void) 
{
    int score[2][3][4] = {
        {{72,80,95,60},{68,98,83,90},{75,72,84,90}},
    {{66,85,90,88},{95,92,88,95},{43,72,56,75}}
    };
    int i, j, k;
    clock_t start, end;
    start = clock();
    for (i = 0; i < 2; i++)
    {
        printf("%d반 점수...\n", i + 1);
        for (j = 0; j < 3; j++)
        {

            for (k = 0; k < 4; k++)
            {
                printf("%5d\n", score[i][j][k]);
                printf("score[%d][%d][%d]\n", i, j, k);
            }
            printf("\n");
        }
        printf("\n");
    }
    for ( i = 0; i < 300; i++)
    {
    }
    end = clock();
    printf("걸린시간 : %.5ld", (end - start) / CLK_TCK);
	system("pause");
	return EXIT_SUCCESS;
}