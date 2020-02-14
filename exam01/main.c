/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.14
  writer - Woo Won.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <Windows.h>

typedef struct card
{
    int index;
    char name[80];
    char number[80];
    char email[80];

} CARD;


static int index = 0;



void input_business_card(CARD* PA);
void show_all_card(CARD* c);
void search_business_card(CARD* c, int num);
void edit_business_card(CARD* PA, int num);


// 메인함수
int main(void)
{
    system("mode con cols=60 lines=25");
    char ch;
    CARD list[50];
    int dw;

    while (1)
    {


        while (1)
        {
            printf("※명함 제조 프로그램※\n");
            printf("\n");
            printf("1. 항목입력 \n");
            printf("2. 항목수정 \n");
            printf("3. 항목삭제 \n");
            printf("4. 항목전체출력 \n");
            printf("5. 항목검색 \n");
            printf("6. 프로그램종료 \n\n");
            printf("원하시는 기능의 번호를 입력해주세요 -> ");
            scanf("%s", &ch);
            getchar();
            if (ch < 49 || ch >54)
            {
                printf("\n");
                printf("1~6번 사이의 숫자를 입력해 주세요.");
                Sleep(1000);
                system("cls");
            }
            else
            {
                break;
            }
        }

        switch (ch)
        {
        case '1':
            printf("항목입력창으로 넘어갑니다.");
            Sleep(1000);
            system("cls");
            input_business_card(list);
            break;


        case '2':
            if (index == 0)
            {
                printf("\n자료가 없습니다. 먼저 자료를 입력하세요");
                Sleep(1000);
                system("cls");
                break;
            }
            else
            {
                printf("몆 번째 자료를 수정하시겠습니까? -> ");
                scanf("%d", &dw);
                getchar();
                if (dw > index || dw <= 0)
                {
                    printf("현재 %c번째 자료는 없습니다", dw);
                }
                else
                {
                    printf("%d번째 자료를 수정합니다~", dw);
                    Sleep(1000);
                    system("cls");
                    edit_business_card(list, dw);
                    break;
                }
            }
            break;


        case '3':
            break;


        case '4':
            show_all_card(list);
            break;


        case '5':
            if (index == 0)
            {
                printf("\n자료가 없습니다. 먼저 자료를 입력하세요");
                Sleep(1000);
                system("cls");
                break;
            }
            else
            {
                printf("몆 번째 자료를 찾으시겠습니까? -> ");
                scanf("%d", &dw);
                getchar();
                if (dw > index || dw <= 0)
                {
                    printf("현재 %c번째 자료는 없습니다", dw);
                }
                else
                {
                    printf("%d번째 자료를 검색합니다~", dw);
                    Sleep(1000);
                    system("cls");
                    search_business_card(list, dw);
                    break;
                }
            }


        case '6':
            break;


        default:
            break;
        }
    }
    system("pause");
    return EXIT_SUCCESS;
}


void input_business_card(CARD* PA)
{
    char name[80], email[80];
    char number[80];
    CARD* insert;
    insert = PA;

    while (1)
    {
        (PA + index)->index = index + 1;
        printf("1. 이름 입력 : ");
        scanf("%s", name);
        strcpy((PA + index)->name, name);
        getchar();
        printf("\n");
        system("cls");
        while (1)
        {
            printf("2. 전화번호 입력('-'없이 입력) : ");
            scanf("%s", number);
            getchar();
            printf("\n");
            char* temp;
            temp = strchr(number, '-');
            if (temp != NULL)
            {
                printf("'-'를 입력하셨습니다. 다시 입력하세요.");
                Sleep(1000);
                system("cls");
            }
            else
            {
                strcpy((PA + index)->number, number);
                system("cls");
                break;
            }
        }
        while (1)
        {
            printf("3. 이메일 입력(@를 반드시 포함) : ");
            scanf("%s", email);
            getchar();
            printf("\n");
            char* temp2;
            temp2 = strchr(email, '@');
            if (temp2 == NULL)
            {
                printf("'@'가 포함되지 않았습니다");
                Sleep(1000);
                system("cls");
            }
            else
            {
                strcpy((PA + index)->email, email);
                system("cls");
                break;
            }
        }
        index += 1;
        char sw;
        printf("계속 입력하시겠습니까? (y/n) : ");
        scanf("%c", &sw);
        getchar();
        if (sw == 78 || sw == 110)
        {
            printf("처음 화면으로 넘어갑니다.");
            Sleep(1000);
            system("cls");
            break;
        }
        else
        {
            system("cls");
        }
    }
    return;
}
void show_all_card(CARD* c)
{
    printf("데이터를 출력합니다");
    Sleep(1000);
    system("cls");
    printf("번호\t이름\t전화번호\t이메일\n");
    for (int i = 0; i < index; i++)
    {
        printf("%d\t%s\t%s\t%s\n", (c + i)->index, (c + i)->name, (c + i)->number, (c + i)->email);
    }
    while (1)
    {
        char sw;
        printf("계속 보시겠습니까? (y/n) : ");
        scanf("%c", &sw);
        getchar();
        if (sw == 78 || sw == 110)
        {
            printf("처음 화면으로 넘어갑니다.");
            Sleep(1000);
            system("cls");
            break;
        }
    }
}


void search_business_card(CARD* c, int num)
{
    int i;

    i = num - 1;

    printf("찾으시는 %d번째 자료의 레코드입니다.\n\n", num);
    printf("번호\t이름\t전화번호\t이메일\n");

    printf("%d\t%s\t%s\t%s\n\n", (c + i)->index, (c + i)->name, (c + i)->number, (c + i)->email);

    while (1)
    {
        char sw;
        printf("계속 보시겠습니까? (y/n) : ");
        scanf("%c", &sw);
        getchar();
        if (sw == 78 || sw == 110)
        {
            printf("처음 화면으로 넘어갑니다.");
            Sleep(1000);
            system("cls");
            break;
        }
    }
}


void edit_business_card(CARD* PA, int num)
{
    int i;

    i = num - 1;

    printf("일단 수정을 원하시는 %d번째 자료의 레코드입니다.\n\n", num);
    printf("번호\t이름\t전화번호\t이메일\n");

    printf("%d\t%s\t%s\t%s\n\n", (PA + i)->index, (PA + i)->name, (PA + i)->number, (PA + i)->email);

    while (1)
    {
        char sw;
        printf("정말 수정하시겠습니까? (y/n) : ");
        scanf("%c", &sw);
        getchar();
        if (sw == 78 || sw == 110)
        {
            printf("처음 화면으로 넘어갑니다.");
            Sleep(1000);
            system("cls");
            return;
        }
        else
        {
            char name[80], email[80];
            char number[80];

            while (1)
            {
                printf("1. 이름 입력 : ");
                scanf("%s", name);
                strcpy((PA + i)->name, name);
                getchar();
                printf("\n");
                system("cls");
                while (1)
                {
                    printf("2. 전화번호 입력('-'없이 입력) : ");
                    scanf("%s", number);
                    getchar();
                    printf("\n");
                    char* temp;
                    temp = strchr(number, '-');
                    if (temp != NULL)
                    {
                        printf("'-'를 입력하셨습니다. 다시 입력하세요.");
                        Sleep(1000);
                        system("cls");
                    }
                    else
                    {
                        strcpy((PA + i)->number, number);
                        system("cls");
                        break;
                    }
                }
                while (1)
                {
                    printf("3. 이메일 입력(@를 반드시 포함) : ");
                    scanf("%s", email);
                    getchar();
                    printf("\n");
                    char* temp2;
                    temp2 = strchr(email, '@');
                    if (temp2 == NULL)
                    {
                        printf("'@'가 포함되지 않았습니다");
                        Sleep(1000);
                        system("cls");
                    }
                    else
                    {
                        strcpy((PA + i)->email, email);
                        system("cls");
                        break;
                    }
                }

                char sw;
                printf("다시 입력하시겠습니까? (y/n) : ");
                scanf("%c", &sw);
                getchar();
                if (sw == 78 || sw == 110)
                {
                    printf("저장을 완료했습니다.\n");
                    Sleep(1000);
                    printf("처음 화면으로 넘어갑니다.");
                    Sleep(1000);
                    system("cls");
                    break;
                }
                else
                {
                    system("cls");
                }
            }
        }
        break;
    }


}