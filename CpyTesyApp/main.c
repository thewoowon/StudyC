/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Woo Won
*/

#include <stdio.h>
#include <stdlib.h>

int *sum(int a, int b);

// �����Լ�
int main(void) 
{
    
    int *resp;

    resp = sum(10,20);
    printf("�� ������ �� : %d\n", *resp);

	system("pause");
	return EXIT_SUCCESS;
}

int *sum(int a, int b)
{
    static int res;

    res = a + b;
    return &res;
}