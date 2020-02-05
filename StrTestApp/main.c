/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Woo Won.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 메인함수
int main(void) 
{
    char str1[80], str2[80];

    while (1)
    {
        scanf("%s %s", str1, str2);
            if (str1[0] == 'X')
            {
            break;
            }
            else if(strcmp(str1,str2)>0)
            {
                printf("%s\n", str2);
            }
            else
            {
                printf("%s\n", str1);
            }
    }
	system("pause");
	return EXIT_SUCCESS;
}
