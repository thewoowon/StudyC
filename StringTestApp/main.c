/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.03
  writer - Woo Won.
*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>



// �����Լ�
int main(void) 
{
    /*char str[80] = "appleJam";
    int res;
    printf("���� ���ڿ� : %s\n", str);
    printf("���ڿ� �Է�  : ");
    res = scanf("%s", str);
    printf("�Է� �� ���ڿ� : %s\n", str);*/

    char str1[80] = "Cat";
    char str2[80];

    strcpy(str1, "Tiger");
    strcpy(str2, str1);
    printf("%s, %s\n", str1, str2);

	system("pause");
	return EXIT_SUCCESS;
}