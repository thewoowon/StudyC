/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�/ ���� �޸� �Ҵ�
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - Woo Won.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    int* pd;
    int i, sum;

    pd = (int*)malloc(5 * sizeof(int));
    if (pd == NULL)
    {
        printf("�޸𸮰� �����մϴ�.\n");
        exit(1);
    }


    printf("�ټ� ���� ���̸� �Է��ϼ���.: ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &pd[i]);;
        sum += pd[i];
    }

    printf("�ټ� ���� ��� ���� : %.1lf\n", (sum / 5.0));
    free(pd);
    

	system("pause");
	return EXIT_SUCCESS;
}