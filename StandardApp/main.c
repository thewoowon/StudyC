/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수// 전처리
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - Woo Won.
*/

#include <stdio.h>
#include <stdlib.h>
#include"student.h"

int main(void) 
{
    int max;

#if VER>=6
    printf("버전 %d입니다.\n", VER);
#endif // VER>=6

#ifdef BIT16
    max = 32767;
#else
    max = 2147483647;
#endif
    printf("int형 변수의 최대값 : %d\n", max);


    //double radius, area;


    ///*Student a = { 315,"홍길동" };

    //printf("학번 : %d, 이름 : %s\n", a.num, a.name);*/
    //printf("반지름을 입력하세요(10 이하) : ");
    //scanf("%lf", &radius);
    //area = PI * radius * radius;
    //if (area>LIMIT)
    //{
    //    ERR_PRN;
    //}
    //else
    //{
    //    printf("원의 면적 : %.2lf (%s)\n", area, MSG);
    //}


    /*int a = 10, b = 20;
    int x = 30, y = 40;
    int res;
    
    printf("a + b = %d\n", SUM(a, b));
    printf("x + y = %d\n", SUM(x, y));
    res = 30 / MUL(2, 5);
    printf("res : %d\n", res);*/



   /* int a1, a2;

    NAME_CAT(a, 1) = 10;
    NAME_CAT(a, 2) = 20;
    PRINT_EXPR(a1 + a2);
    PRINT_EXPR(a1 - a2);*/

	system("pause");
	return EXIT_SUCCESS;
}