/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�// ��ó��
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
    printf("���� %d�Դϴ�.\n", VER);
#endif // VER>=6

#ifdef BIT16
    max = 32767;
#else
    max = 2147483647;
#endif
    printf("int�� ������ �ִ밪 : %d\n", max);


    //double radius, area;


    ///*Student a = { 315,"ȫ�浿" };

    //printf("�й� : %d, �̸� : %s\n", a.num, a.name);*/
    //printf("�������� �Է��ϼ���(10 ����) : ");
    //scanf("%lf", &radius);
    //area = PI * radius * radius;
    //if (area>LIMIT)
    //{
    //    ERR_PRN;
    //}
    //else
    //{
    //    printf("���� ���� : %.2lf (%s)\n", area, MSG);
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