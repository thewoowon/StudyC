/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
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



// �����Լ�



int main(void) 
{
    NODE *temp, *Head;
    double a;
  
    printf("������ �Է����ּ��� : "); // ���Ϳ� ���� ���� �Է�
    scanf("%lf", &a);// �Է¹޴´�.
    getchar(); // ���Ͱ��� ����Ѵ�.

    temp

    Head =insertNode(temp,a); //�Ҵ�� ����ü ������ Head�� ��带 �߰��Ѵ�.






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
        printf("���� : %.1lf\n", current);
        
    }
}