/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.13
  writer - Woo Won.
*/

#include <stdio.h>
#include <stdlib.h>

NODE* insertNode(NODE* n, double a);
NODE* deleteNode(NODE* n,int i);
void printNode(NODE* n);


typedef struct node
{
    int index;
    double Toeic;
    struct node* next;
} NODE;



// 메인함수



int main(void) 
{
    NODE *temp, *Head;
    double a;
  
    printf("점수를 입력해주세요 : "); // 토익에 넣을 점수 입력
    scanf("%lf", &a);// 입력받는다.
    getchar(); // 엔터값을 상쇄한다.

    temp

    Head =insertNode(temp,a); //할당된 구조체 포인터 Head에 노드를 추가한다.






    system("pause");
	return EXIT_SUCCESS;
}



NODE* insertNode(NODE* n, double a)
{
    NODE* New_node;
    if (n ==NULL)
    {

    }



    return;
}



NODE* deleteNode(NODE *n,int i)
{
    
        return;
}

void printNode(NODE *n)
{
    NODE* current;

    printf("list all : \n");
    current = n;
    while (1)
    {
        if (current == NULL)
        {
            break;
        }
        printf("토익 : %.1lf\n", current);
        
    }
}