//파일 이름을 입력받아 파일의 내용을 콘솔 화면에 출력
#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <sys/types.h>
#include <direct.h>

#define _CRT_SECURE_NO_WARNINGS
void readandprint(const char* fname);
int cycle();
void fileopener(char a);


    int cycle()
    {
        char strPath[] = { "D:\\document" };

        int nResult = _access(strPath, 0);

        return nResult;
    }

void readandprint(const char* fname)
{
    FILE* fp;

    //fp = fopen(fname,"r")과 fopen_s(&fp,fname,"r")는 같은 기능 수행
    fopen_s(&fp, fname, "r");//읽기 모드로 파일 열기

    if (fp == NULL)
    {
        perror("파일 열기 실패");//에러 출력
        exit(0); //프로그램 종료
    }

    while (!feof(fp))//파일의 끝을 만나지 않았다면 반복
    {
        printf("%c", fgetc(fp));//하나의 문자를 읽어와서 콘솔 화면에 출력
    }

    fclose(fp);//파일 스트림 닫기
    printf("\n==%s 내용==\n", fname);
}
int main(void)
{
    char ch[200];

    while (1) 
    {
        if (cycle() == 0) 
        {
            break;
        }
        else
        {
            continue;
        }
    }
    readandprint();
}

int filopener(char a)
{
    FILE* fp;
    fp = fopen("input.txt", "r");
    fclose(fp);
}

int dir()
{
    DIR 
}