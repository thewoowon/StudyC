/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수// 중목제거학습
  --------------------------------------------------------------------------------
  first created - 2020.02.11
  writer - Woo Won
*/

#include <stdio.h>
#include <stdlib.h>
#include "line.h"
#include "point.h"
#include <string.h>


// 메인함수
int main(void) 
{
    Line a = { {1,2},{5,6} };
    Point b;

    b.x = (a.first.x + a.second.x) / 2;
    b.y = (a.first.y + a.second.y) / 2;
    printf("선의 가운데 점의 좌표 : (%d, %d)\n", b.x, b.y);

	system("pause");
	return EXIT_SUCCESS;
}