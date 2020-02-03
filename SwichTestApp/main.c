/*
  filename - main.c
  version - 1.0
  description - Switch 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.03
  writer - Woo Won
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int rank = 2, res = 0;
    scanf("%d", &rank);

    /*if (rank ==1)
    {
        res = 300;
    }
    else if (rank ==2)
    {
        res = 200;
    }
    else if (rank == 3)
    {
        res = 100;
    }
    else
    {
        res = 10;
    }*/
    
    switch (rank)
    {
    case 1 :
        res += 300;
        break;
    case 2:
        res += 200;
        break;
    case 3:
        res += 100;
        break;
    default:
        res += 10;
        break;
    


    printf("res = %d,rank = %d\n", res,rank);
  
	system("pause");
	return EXIT_SUCCESS;
}