#pragma once
#define PI 3.141592
#define LIMIT 100.0
#define MSG "passed"
#define ERR_PRN printf("��� ������ ���� �����ϴ�!!\n")
#define SUM(a,b) ((a)+(b))
#define MUL(a,b) ((a)*(b))
#define PRINT_EXPR(x) printf(#x"=%d\n",x)
#define NAME_CAT(x,y) (x##y)
#define VER 7
#define BIT16
#pragma warning(disable:4996)
#pragma warning(disable:4101)

typedef struct
{
	int num;
    char name[20];
} Student;
