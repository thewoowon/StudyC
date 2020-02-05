/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <sys/types.h>
#include <direct.h>
#include <conio.h>

#define _CRT_SECURE_NO_WARNINGS
// �����Լ�
int main(void) 
{
    _finddata_t fd;
    long handle;
    int result = 1;
    handle = _findfirst(".\\*.*", &fd);  //���� ���� �� ��� ������ ã�´�.

    if (handle == -1)
    {
        printf("There were no files.\n");
        return;
    }

    while (result != -1)
    {
        printf("File: %s\n", fd.name);
        result = _findnext(handle, &fd);
    }

    _findclose(handle);
    return;
}