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

// �����Լ�
int main(void) 
{
    int a[5] = { 3,1,2,5,4 };
    int i, j, temp;
    int min;

    for ( i = 0; i < 4; i++)
    {
        min = i;
        for ( j = i +1; j < 5; j++)
        {
            if (a[min]>a[j])
            {
                min = j;
            }
        }
        if (min!=i)
        {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%5d", a[i]);
    }


	system("pause");
	return EXIT_SUCCESS;
}