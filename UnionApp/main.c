/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수// 공용체사용    
  ------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - Woo Won
*/

#include <stdio.h>
#include <stdlib.h>

struct student
{
    int num;
    double grade;
};
typedef struct student Student;
void print_data(Student* ps);
enum season
{
    spring,
    summer,
    fall,
    winter
};


// 메인함수
int main(void) 
{
    Student s1 = { 315,4.4 };

    print_data(&s1);





    /*enum season ss;
    char* pc = NULL;

    ss = spring;
    switch (ss)
    {
    case spring:
        pc = "inline";
        break;
    case summer:
        pc = "swimming";
        break;
    case fall:
        pc = "trip";
        break;
    case winter:
        pc = "skiing";
        break;
    }
    printf("나의 레저 활동 => %s\n", pc);
    */
    /*union student s1 = { 315 };

    printf("학번 : %d\n", s1.num);
    s1.grade = 4.4;
    printf("학점 : %.1lf\n", s1.grade);
    printf("학번 : %d\n", s1.num);*/

	system("pause");
	return EXIT_SUCCESS;
}

void print_data(Student* ps)
{
    printf("학번 : %d\n", ps->num);
    printf("학점 : %.1lf\n", ps->grade);
}
