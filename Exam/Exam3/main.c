/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.13
  writer - Woo Won
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

void gotoxy(int x, int y);
void calc(struct student_t *a);


struct student_t
{
    int kor;
    int Eng;
    int Mat;
};

// �����Լ�
int main(void) 
{
    struct student_t type[3];
    char a;


    system("title �����Է±�");
    system("mode con cols=50 lines=18");
   

    printf("������������������������������������������������������������������������������������������������\n");
    printf("��                                              ��\n");
    printf("��                                              ��\n");
    printf("��                                              ��\n");
    printf("��                                              ��\n");
    printf("��                                              ��\n");
    printf("��                                              ��\n");
    printf("��                                              ��\n");
    printf("��                                              ��\n");
    printf("��                                              ��\n");
    printf("��                                              ��\n");
    printf("��                                              ��\n");
    printf("��                                              ��\n");
    printf("������������������������������������������������������������������������������������������������\n");







    for ( int i = 0; i <6; i++)
    {

        gotoxy(8, 2);
        printf("�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�\n");
        gotoxy(8, 3);
        printf("��                            ��\n");
        gotoxy(8, 4);
        printf("��                            ��\n");
        gotoxy(8, 5);
        printf("��                            ��\n");
        gotoxy(8, 6);
        printf("��       ���� �Է� �ܼ�       ��\n");
        gotoxy(8, 7);
        printf("��                            ��\n");
        gotoxy(8, 8);
        printf("��                            ��\n");
        gotoxy(8, 9);
        printf("��                            ��\n");
        gotoxy(8, 10);
        printf("��                            ��\n");
        gotoxy(8, 11);
        printf("�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�");
        Sleep(200);
        gotoxy(8, 2);
        printf("�١١١١١١١١١١١١١١١�");
        gotoxy(8, 3);
        printf("��                            ��");
        gotoxy(8, 4);
        printf("��                            ��");
        gotoxy(8, 5);
        printf("��                            ��");
        gotoxy(8, 6);
        printf("��       ���� �Է� �ܼ�       ��");
        gotoxy(8, 7);
        printf("��                            ��");
        gotoxy(8, 8);
        printf("��                            ��");
        gotoxy(8, 9);
        printf("��                            ��");
        gotoxy(8, 10);
        printf("��                            ��");
        gotoxy(8, 11);
        printf("�١١١١١١١١١١١١١١١�");
        Sleep(200);
    }


    system("cls");

    printf("������������������������������������������������������������������������������������������������\n");
    printf("��          ��������������������������������������������������������������������  ��\n");
    printf("��          ��   ����   ��   ����   ��   ����   ��  ��\n");
    printf("��          ��          ��          ��          ��  ��\n");
    printf("�� ��������������������������������������������������������������������������������������  ��\n");
    printf("�� ��   1��  ��          ��          ��          ��  ��\n");
    printf("�� ��        ��          ��          ��          ��  ��\n");
    printf("�� ��������������������������������������������������������������������������������������  ��\n");
    printf("�� ��   2��  ��          ��          ��          ��  ��\n");
    printf("�� ��        ��          ��          ��          ��  ��\n");
    printf("�� ��������������������������������������������������������������������������������������  ��\n");
    printf("�� ��   3��  ��          ��          ��          ��  ��\n");
    printf("�� ��        ��          ��          ��          ��  ��\n");
    printf("�� ��������������������������������������������������������������������������������������  ��\n");
    printf("��                                              ��\n");
    printf("������������������������������������������������������������������������������������������������\n");



    for (int i = 0; i < 3; i++)
    {
        gotoxy(17, 5 + i*3);
        scanf("%d", &type[i].kor);
        getchar();
        gotoxy(28, 5 + i*3);
        scanf("%d", &type[i].Eng);
        getchar();
        gotoxy(39, 5 + i*3);
        scanf("%d", &type[i].Mat);
        getchar();
    }
    _sleep(1000);
    system("cls");
    printf("������ ����� ��� ���Դϴ�!");
    _sleep(1000);
    system("cls");


    calc(type);


	system("pause");
	return EXIT_SUCCESS;
}


void calc(struct student_t* a)
{
    int j = 3;
    int sum[3];
    double avg[3];


    for (int i = 0; i < j; i++)
    {
        printf("%d�� �л��� ������ ��� : ", i);
            sum[i] = a[i].kor + a[i].Mat + a[i].Eng;
            avg[i] = (double) sum[i] / 3;
            printf("%d�� %.2lf\n", sum[i], avg[i]);
    }
}

void gotoxy(int x, int y)

{

    COORD pos = { x,y };

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}