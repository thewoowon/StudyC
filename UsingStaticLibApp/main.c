/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, ���̺귯�� ���
  --------------------------------------------------------------------------------
  first created - 2020.02.11
  writer - Woo Won
*/

#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

int main(void) 
{
    puts("����������������������������������������");
    puts("��  ���� ���̺귯�� ��");
    puts("����������������������������������������");

    
    int data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    int result = get_total(data, 10);


    printf("Result is %d\n", result);


    system("pause");
    return EXIT_SUCCESS;
}