/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� // ����
  --------------------------------------------------------------------------------
  first created - 2020.02.13
  writer - Woo Won
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// �����Լ�
int main(void) 
{
    int j = 0;

    for (int i = 1; i < 101; i++)
    {
        if ((i*3)<=300)
        {
            j += (i * 3);
        }
    }
    system("cls");
    


    printf("%d\n", j);
	system("pause");
	return EXIT_SUCCESS;
}