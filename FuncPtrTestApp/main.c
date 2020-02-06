/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
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

// 메인함수
int main(void) 
{
    int sel;
    
    revive:
    printf("01 두 정수의 합\n");
    printf("02 두 정수의 곱\n");
    printf("03 두 정수 중에서 큰 값 계산\n");
    printf("원하는 연산을 선택 하세요. : ");
    scanf("%d", &sel);


    switch (sel)
    {
    case 1: func(sum); break; 
    case 2: func(mul); break; 
    case 3: func(Max); break; 
    default: printf("1~3의 숫자를 누르세요ㅡㅡ\n");
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

    printf("두 정수의 값을 입력하세요 : ");
    scanf("%d%d", &a, &b);
    res = fp(a, b);
    printf("결괏값은 : %d\n", res);
    printf("다시 하러면 1번, 그만 두려면 2번\n");
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