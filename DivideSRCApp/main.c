/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�// ���� ������ �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.11
  writer - Woo Won
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void input_data(int*, int*);
double average(int, int);

// �����Լ�
int main(void) 
{
    int a, b;
    double avg;

    input_data(&a, &b);
    avg = average(a, b);
    printf("%d�� %d�� ��� : %.1lf\n", a, b, avg);


	system("pause");
	return EXIT_SUCCESS;
}