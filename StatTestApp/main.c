/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수// 정적변수 활용
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Woo Won
*/

#include <stdio.h>
#include <stdlib.h>


/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Woo Won
*/

#include <stdio.h>
#include <stdlib.h>

void auto_func(void);
void static_func(void);


// 메인함수
int main(void)
{
    register int i;
    int sum = 0;

    for ( i = 1; i <= 10000; i++)
    {
        sum += i;
    }
    printf("%d\n", sum);

    system("pause");
    return EXIT_SUCCESS;
}

//void auto_func(void)
//{
//    auto int a = 0;
//
//    a++;
//    printf("%d\n", a);
//}
//
//
//void static_func(void)
//{
//    static int a;
//
//    a++;
//    printf("%d\n", a);
//}

// 메인함수
//int main(void)
//{
//    int i;
//
//    printf("일반 지역 변수(AUTO)를 사용한 함수....\n");
//    for (i = 0; i < 3; i++)
//    {
//        auto_func();
//    }
//    printf("정적 지역 변수(STATIC)를 사용한 함수....\n");
//    for (i = 0; i < 3; i++)
//    {
//        static_func();
//    }
//
//    system("pause");
//    return EXIT_SUCCESS;
//}

void auto_func(void)
{
    auto int a = 0;

    a++;
    printf("%d\n", a);
}


void static_func(void)
{
    static int a;

    a++;
    printf("%d\n", a);
}