/*
  filename - main.c
  version - 1.0
  description - Pointer ���ο�
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - Woo Won.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    int a = 10;
    int* p = &a;
    int* pd;

    pd = p;
    printf("%d\n", a);
    printf("%d\n", *p);
    printf("%d\n", *pd);

	system("pause");
	return EXIT_SUCCESS;
}