/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - Woo Won.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// �����Լ�

void print_str(char** ps);

int main(void) 
{
    char temp[80];
    char* str[21] = { 0 };
    int i = 0;

    while (i<20)
    {
        printf("���ڿ��� �Է��ϼ��� : ");
        gets(temp);
        if (strcmp(temp, "end") == 0) break;
        str[i] = (char*)malloc(strlen(temp) + 1);
        strcpy(str[i], temp);
        i++;
    }
    print_str(str);

    for ( i = 0; str[i] != NULL ; i++)
    {
        free(str[i]);
    }

    system("pause");
    return EXIT_SUCCESS;
}

void print_str(char** ps)
{
    while (*ps !=NULL)
    {
        printf("%s\n", *ps);
        ps++;
    }
}
