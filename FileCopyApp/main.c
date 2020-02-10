/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�// ���Ϻ���
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - Woo Won.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    FILE* ifp, * ofp;
    char name[2];
    int kor, eng, mat;
    int total;
    double avg;
    int res;

    ifp = fopen("aa.txt", "r+");
    if (ifp == NULL)
    {
        printf("�Է� ������ ���� ���߽��ϴ�.\n");
        return 1;
    }

    ofp = fopen("bb.txt", "w");
    if (ofp == NULL)
    {
        printf("��� ������ ���� ���߽��ϴ�.\n");
        return 1;
    }
    while (1)
    {
        res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &mat);
        if (res == EOF)
        {
            break;
        }
        total = kor + eng + mat;
        avg = total / 3.0;
        fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg);
    }

    fclose(ifp);
    fclose(ofp);
	system("pause");
	return EXIT_SUCCESS;
}