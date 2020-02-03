/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.03
  writer - Woo Won.
*/

#include <stdio.h>
#include <stdlib.h>
#include<Windows.h>
// 메인함수
void gotoxy(int x, int y)

{

    COORD pos = { x,y };

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}
void textcolor(int color_number)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
}
void console(int a)
{
    
}
int main(void) 
{
    int i, j;
    int x, y;
    system("mode con:cols=200 lines=20");
    system("color 4");
    
    system("title 우원이꺼");
    
    
    for ( i = 1; i < 10; i++)
    {
       
        textcolor(i);
        Sleep(1000);
  
        gotoxy(i * 16, 1);
        for ( j = 1; j < 10; j++)
        {
            gotoxy(i * 16, j);
            printf("◆ %d * %d = %d ◆\n", i, j, i * j);
        }
    }
   
    
    //for (i = 1; i < 10; i++)
    //{
    //    
    //    for (j = 1; j < 10; j++)
    //    {
    //         printf("◆ %d * %d = %d ◆\n", i, j, i * j);
    //    }
    //    gotoxy((i) * 16, 1);
    //    /*printf("\n");*/
    //}

	system("pause");
	return EXIT_SUCCESS;
}