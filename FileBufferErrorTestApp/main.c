/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 // 버퍼 공유
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - Woo Won.
*/

#include <stdio.h>
#include <stdlib.h>

void my_fflush(FILE* fp);


// 메인함수
int main(void) 
{
    FILE* fp;
    int age;
    char name[20];

    fp = fopen("aa.txt", "r");

    fscanf(fp, "%d", &age);
    fgetc(fp);
    fgets(name, sizeof(name), fp);
    my_fflush(fp);

    printf("나이 : %d, 이름 : %s\n", age, name);
    fclose(fp);

	system("pause");
	return EXIT_SUCCESS;
}

void my_fflush(FILE* fp)
{
    fopen("aa.txt", "r+");
    fseek(fp, 2, SEEK_END);
    /*if (fp =='\n')
    {
        fp = NULL;
    }
    else
    {*/
        printf("%s", fp);
    
}