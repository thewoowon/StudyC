/*
  filename - main.c
  version - 1.0
  description - 함수 만들기
  --------------------------------------------------------------------------------
  first created - 2020.02.03
  writer - Woo Won.
*/

#include <stdio.h>
#include <stdlib.h>


int sum(int x, int y);
void print_char(char ch, int count);
void print_line(void);
void fruit(void);




// 메인함수
int main(void)
{
    /*print_char('@', 5);*/

    fruit(1);
    system("pause");
    return EXIT_SUCCESS;
}

void print_char(char ch, int count)
{
    int i;

    for (i = 0; i < count; i++)
    {
        printf("%c", ch);

    }
    return;
}
void fruit(int count)
{
    printf("apple\n");
    if (count == 3)
    {
        return;
    }
     fruit(count + 1);
     printf("jam\n");
    
}


//합계함수
int sum(int x, int y)
{
    int temp;
   
    temp = x + y;

    return temp;
	
}

void print_line(void)
{

}

