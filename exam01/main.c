/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
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


// �����Լ�
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
            printf("�ظ��� ���� ���α׷���\n");
            printf("\n");
            printf("1. �׸��Է� \n");
            printf("2. �׸���� \n");
            printf("3. �׸���� \n");
            printf("4. �׸���ü��� \n");
            printf("5. �׸�˻� \n");
            printf("6. ���α׷����� \n\n");
            printf("���Ͻô� ����� ��ȣ�� �Է����ּ��� -> ");
            scanf("%s", &ch);
            getchar();
            if (ch < 49 || ch >54)
            {
                printf("\n");
                printf("1~6�� ������ ���ڸ� �Է��� �ּ���.");
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
            printf("�׸��Է�â���� �Ѿ�ϴ�.");
            Sleep(1000);
            system("cls");
            input_business_card(list);
            break;


        case '2':
            if (index == 0)
            {
                printf("\n�ڷᰡ �����ϴ�. ���� �ڷḦ �Է��ϼ���");
                Sleep(1000);
                system("cls");
                break;
            }
            else
            {
                printf("�p ��° �ڷḦ �����Ͻðڽ��ϱ�? -> ");
                scanf("%d", &dw);
                getchar();
                if (dw > index || dw <= 0)
                {
                    printf("���� %c��° �ڷ�� �����ϴ�", dw);
                }
                else
                {
                    printf("%d��° �ڷḦ �����մϴ�~", dw);
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
                printf("\n�ڷᰡ �����ϴ�. ���� �ڷḦ �Է��ϼ���");
                Sleep(1000);
                system("cls");
                break;
            }
            else
            {
                printf("�p ��° �ڷḦ ã���ðڽ��ϱ�? -> ");
                scanf("%d", &dw);
                getchar();
                if (dw > index || dw <= 0)
                {
                    printf("���� %c��° �ڷ�� �����ϴ�", dw);
                }
                else
                {
                    printf("%d��° �ڷḦ �˻��մϴ�~", dw);
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
        printf("1. �̸� �Է� : ");
        scanf("%s", name);
        strcpy((PA + index)->name, name);
        getchar();
        printf("\n");
        system("cls");
        while (1)
        {
            printf("2. ��ȭ��ȣ �Է�('-'���� �Է�) : ");
            scanf("%s", number);
            getchar();
            printf("\n");
            char* temp;
            temp = strchr(number, '-');
            if (temp != NULL)
            {
                printf("'-'�� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.");
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
            printf("3. �̸��� �Է�(@�� �ݵ�� ����) : ");
            scanf("%s", email);
            getchar();
            printf("\n");
            char* temp2;
            temp2 = strchr(email, '@');
            if (temp2 == NULL)
            {
                printf("'@'�� ���Ե��� �ʾҽ��ϴ�");
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
        printf("��� �Է��Ͻðڽ��ϱ�? (y/n) : ");
        scanf("%c", &sw);
        getchar();
        if (sw == 78 || sw == 110)
        {
            printf("ó�� ȭ������ �Ѿ�ϴ�.");
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
    printf("�����͸� ����մϴ�");
    Sleep(1000);
    system("cls");
    printf("��ȣ\t�̸�\t��ȭ��ȣ\t�̸���\n");
    for (int i = 0; i < index; i++)
    {
        printf("%d\t%s\t%s\t%s\n", (c + i)->index, (c + i)->name, (c + i)->number, (c + i)->email);
    }
    while (1)
    {
        char sw;
        printf("��� ���ðڽ��ϱ�? (y/n) : ");
        scanf("%c", &sw);
        getchar();
        if (sw == 78 || sw == 110)
        {
            printf("ó�� ȭ������ �Ѿ�ϴ�.");
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

    printf("ã���ô� %d��° �ڷ��� ���ڵ��Դϴ�.\n\n", num);
    printf("��ȣ\t�̸�\t��ȭ��ȣ\t�̸���\n");

    printf("%d\t%s\t%s\t%s\n\n", (c + i)->index, (c + i)->name, (c + i)->number, (c + i)->email);

    while (1)
    {
        char sw;
        printf("��� ���ðڽ��ϱ�? (y/n) : ");
        scanf("%c", &sw);
        getchar();
        if (sw == 78 || sw == 110)
        {
            printf("ó�� ȭ������ �Ѿ�ϴ�.");
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

    printf("�ϴ� ������ ���Ͻô� %d��° �ڷ��� ���ڵ��Դϴ�.\n\n", num);
    printf("��ȣ\t�̸�\t��ȭ��ȣ\t�̸���\n");

    printf("%d\t%s\t%s\t%s\n\n", (PA + i)->index, (PA + i)->name, (PA + i)->number, (PA + i)->email);

    while (1)
    {
        char sw;
        printf("���� �����Ͻðڽ��ϱ�? (y/n) : ");
        scanf("%c", &sw);
        getchar();
        if (sw == 78 || sw == 110)
        {
            printf("ó�� ȭ������ �Ѿ�ϴ�.");
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
                printf("1. �̸� �Է� : ");
                scanf("%s", name);
                strcpy((PA + i)->name, name);
                getchar();
                printf("\n");
                system("cls");
                while (1)
                {
                    printf("2. ��ȭ��ȣ �Է�('-'���� �Է�) : ");
                    scanf("%s", number);
                    getchar();
                    printf("\n");
                    char* temp;
                    temp = strchr(number, '-');
                    if (temp != NULL)
                    {
                        printf("'-'�� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.");
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
                    printf("3. �̸��� �Է�(@�� �ݵ�� ����) : ");
                    scanf("%s", email);
                    getchar();
                    printf("\n");
                    char* temp2;
                    temp2 = strchr(email, '@');
                    if (temp2 == NULL)
                    {
                        printf("'@'�� ���Ե��� �ʾҽ��ϴ�");
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
                printf("�ٽ� �Է��Ͻðڽ��ϱ�? (y/n) : ");
                scanf("%c", &sw);
                getchar();
                if (sw == 78 || sw == 110)
                {
                    printf("������ �Ϸ��߽��ϴ�.\n");
                    Sleep(1000);
                    printf("ó�� ȭ������ �Ѿ�ϴ�.");
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