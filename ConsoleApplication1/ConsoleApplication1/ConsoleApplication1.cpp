//파일 이름을 입력받아 파일의 내용을 콘솔 화면에 출력
#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#define _CRT_SECURE_NO_WARNINGS
void readandprint(const char* fname);
void cycle();



    void cycle()
    {
        char strPath[] = { "D:\\document" };

        int nResult = _access(strPath, 0);

        if (nResult == 0)
        {
            printf("지정한 경로에 파일,폴더가 존재 합니다.");
        }
        else if (nResult == -1)
        {
            printf("지정한 경로에 파일⁄폴더가 존재하지 않습니다.");
        }

        return ;
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
	FILE* file_pointer;
	file_pointer = fopen("D:\\document\\input.txt", "r");
	fclose(file_pointer);
}