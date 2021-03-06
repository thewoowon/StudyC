/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - Woo Won.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>
#include <dos.h>
// 메인함수

#define ITERATION_TIME 100000

void print_ary(int (*)[4]);

int main(void) 
{
    int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
    
    print_ary(ary);

    system("pause");
	return EXIT_SUCCESS;
}


void print_ary(int (*pa)[4])
{
    int i, j;

    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%5d", pa[i][j]);
        }
        printf("\n");
    }
}