/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�/ �����н�
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - Woo Won.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    int num, grade;
    char temp;

    printf("�й� �Է� : ");
    scanf("%d", &num);
    temp= getchar();
    printf("temp : %c", temp);
    printf("���� �Է� : ");
    grade = getchar();
    printf("�й� : %d, ���� : %c\n", num, grade);
    printf("\n");

	system("pause");
	return EXIT_SUCCESS;
}