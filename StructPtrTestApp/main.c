/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수// 구조체 포인터
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - Woo Won
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct list
{
    int num;
    struct list* next;
};

// 메인함수
int main(void)
{
    struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
    struct list* head = &a, * current;

    a.next = &b;
    b.next = &c;

    printf("head -> num : %d\n", head->num);
    printf("head->next->num : %d\n", head->next->num);

    printf("list all : ");
    current = head;
    while (current!=NULL)
    {
        printf("%d   ", current->num);
        current = current->next;
    }
    printf("\n");

}
