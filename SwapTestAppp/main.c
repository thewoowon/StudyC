/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

void swap(int* pa, int* pb);

// �����Լ�
int main(void) 
{
    int a = 10, b = 20;

    swap(&a, &b);
    printf("a : %d, b : %d\n", a, b);


	system("pause");
	return EXIT_SUCCESS;
}

void swap(int* pa, int* pb)
{
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;
}