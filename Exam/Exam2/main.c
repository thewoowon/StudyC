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


// �����Լ�
int main(void) 
{
	int  ref, res;
	char grade[5] = { 'A','B','C','D','F' };


	printf("������ �Է��ϼ��� : ");
	scanf("%d", &ref);

	res = ref / 10;


	if (res>=9)
	{
		printf("�̹� ����� %c�Դϴ�. ���ϵ����~\n",'A');
	}
	else if (res>=7)
	{
		printf("�̹� ����� %c�Դϴ�. ���ݸ� ��~~\n", 'B');
	}
	else if (res >=6)
	{
		printf("�̹� ����� %c�Դϴ�. �ƽ�����~~\n", 'C');
	}
	else if (res >= 6)
	{
		printf("�̹� ����� %c�Դϴ�. ����ϼ���~\n", 'D');
	}
	else
	{
		printf("�̹� ����� %c�Դϴ�. �й��ϼ���!\n", 'F');
	}
		

	system("pause");
	return EXIT_SUCCESS;
}