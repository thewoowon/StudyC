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
#include <time.h>
#include <Windows.h>

void func(int (*fp)(int, int));
int sum(int a, int b);
int mul(int a, int b);
int Max(int a, int b);

// �����Լ�
int main(void) 
{
    int sel;
    
    revive:
    printf("01 �� ������ ��\n");
    printf("02 �� ������ ��\n");
    printf("03 �� ���� �߿��� ū �� ���\n");
    printf("���ϴ� ������ ���� �ϼ���. : ");
    scanf("%d", &sel);


    switch (sel)
    {
    case 1: func(sum); break; 
    case 2: func(mul); break; 
    case 3: func(Max); break; 
    default: printf("1~3�� ���ڸ� ��������Ѥ�\n");
        Sleep(1000);
        system("cls");
        goto revive;
    }
    system("pause");
    return EXIT_SUCCESS;
}
void func(int (*fp)(int, int))
{
    re:
    system("cls");
    int a, b;
    int res;
    int c;

    printf("�� ������ ���� �Է��ϼ��� : ");
    scanf("%d%d", &a, &b);
    res = fp(a, b);
    printf("�ᱣ���� : %d\n", res);
    printf("�ٽ� �Ϸ��� 1��, �׸� �η��� 2��\n");
    scanf("%d", &c);
   
    
    switch (c)
    {
    case 1 : goto re;
    case 2: break;
    }
}

int sum(int a, int b)
{
    return (a + b);
}

int mul(int a, int b)
{
    return (a * b);
}

int Max(int a, int b)
{
    return max(a, b);
}