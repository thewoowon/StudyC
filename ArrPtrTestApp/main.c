/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수/ 배열과 포인터
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - Woo Won
*/

#include <stdio.h>
#include <stdlib.h>

void print_ary(int* pa,int size);

// 메인함수
int main(void) 
{
    int ary[5] = { 10,20,30,40,50 };
    int ary2[7] = { 10,20,30,40,50,60,70 };

    print_ary(ary,5);
    printf("\n");
    print_ary(ary2, 7);
    printf("\n");
  
	system("pause");
	return EXIT_SUCCESS;
}
// 배열 출력 함수;; 집에 가고 싶은데
void print_ary(int* pa, int size)
{
    int i;

    for ( i = 0; i < size; i++)
    {
        printf("%d ", pa[i]);
    }
    
}
