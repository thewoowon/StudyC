//파일 이름을 입력받아 파일의 내용을 콘솔 화면에 출력
#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <sys/types.h>
#include <direct.h>
#include <conio.h>
#include <Windows.h>

#define _CRT_SECURE_NO_WARNINGS

void readandprint(char** fname);
int cycle();
void roop(char** fname);


    int cycle() // 접근 가능 한가 아닌가 검사하는 함수 
    {
        char strPath[] = { "D:\\document" };

        int nResult = _access(strPath, 0);

        return nResult; // 만약 접근 가능 하면 1을 반환 아니면 0을 반환
    }


void readandprint(char** fname)
{
    FILE* fp;

    //fp = fopen(fname,"r")과 fopen_s(&fp,fname,"r")는 같은 기능 수행
    fopen_s(&fp, *fname, "r");//읽기 모드로 파일 열기

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
void main(void)
{

    char* fname = NULL;
    char name[50];
    char* copy = NULL;
   
            roop(&fname);
            copy = fname;
            strcpy_s(name, fname);
            
           // readandprint(&fname);
            Sleep(1000);
    
   
    return;
}
void roop(char** fname)
{
    _finddata_t fd;
    long handle;
    int result = 1;
    int count = 0;
    handle = _findfirst("D:\\document\\*.*", &fd);  //현재 폴더 내 모든 파일을 찾는다.
    
    while (result != -1)
    {
        result = _findnext(handle, &fd);
    }
    _findclose(handle);
    *fname = fd.name;
    printf("%s1\n", *fname);
    printf("%s2\n", fd.name);
    return;
}