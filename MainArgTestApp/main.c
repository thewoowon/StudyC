/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� //main �Լ��� ����� ���
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - Woo Won
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// �����Լ�
int main(int argc, char**argv) 
{
    int i;
  

    

    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

   

	system("pause");
	return EXIT_SUCCESS;
}