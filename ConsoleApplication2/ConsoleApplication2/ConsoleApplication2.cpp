
#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <sys/types.h>
#include <direct.h>
#include <conio.h>

#define _CRT_SECURE_NO_WARNINGS

 void main()
{
    _finddata_t fd;
    long handle;
    int result = 1;
    int count = 0;
    handle = _findfirst("D:\\document\\*.*", &fd);  //현재 폴더 내 모든 파일을 찾는다.

    if (handle == -1)
    {
        printf("There were no files.\n");
        return;
    }

    while (result != -1)
    {
        printf("File: %s\n", fd.name);
        count++;
        result = _findnext(handle, &fd);
    }

    _findclose(handle);

    printf("마지막 파일 이름은 : %s", fd.name );
    return fd.name;
}