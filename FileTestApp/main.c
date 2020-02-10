/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수// File Pointer
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - Woo Won.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 메인함수
int main(void) 
{
    FILE* afp, * bfp;
    int num = 10;
    int res;

    afp = fopen("aa.txt", "wt");
    fprintf(afp, "%d", num);

    bfp = fopen("b.txt", "wb");
    fwrite(&num, sizeof(num), 1, bfp);

    fclose(afp);
    fclose(bfp);
    
    bfp = fopen("b.txt", "rb");
    fread(&res, sizeof(res), 1, bfp);
    printf("%d", res);

    fclose(bfp);

    /*FILE* fp;
    int ary[10] = { 13,10,13,13,10,27,13,10,13,10 };
    int i, res;
    

    fp = fopen("d.txt", "wb");
    for ( i = 0; i < 10; i++)
    {
        fputc(ary[i], fp);
    }
    fclose(fp);

    fp = fopen("d.txt", "rt");
    while (1)
    {
        res = fgetc(fp);
        if (res ==EOF)
        {
            break;
        }
        printf("%c", res);
    }
    fclose(fp);*/
    /*while (1)
    {
        ch = fgetc(stdin);
        if (ch ==EOF)
        {
            break;
        }
        fputc(ch, stdout);
    }*/





    /*FILE* fp;
    char str[] = "Banana";
    int i;

    fp = fopen("w.txt", "w");
    if (fp == NULL)
    {
        printf("파일을 만들지 않았습니다.\n");
        return 1;
    }
    i = 0;
    while (str[i] != '\0')
    {
        fputc(str[i], fp);
        i++;
    }
    fputc('\n', fp);


    while (1)
    {
        i = fgetc(fp);
        if (i == EOF)
        {
            break;
        }
        putchar(i);
    }
    fclose(fp);*/

	system("pause");
	return EXIT_SUCCESS;
}