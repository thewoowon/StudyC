/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�// Macro
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - Woo Won
*/

#include <stdio.h>
#include <stdlib.h>

void func(void);


// �����Լ�
int main(void) 
{
    printf("������ ��¥�� �ð� : %s, %s\n\n", __DATE__, __TIME__);
    printf("���ϸ� : %s\n", __FILE__);
    printf("�Լ��� : %s\n", __FUNCTION__);
    printf("���ȣ : %d\n", __LINE__);


#line 100 "macro.c"
    func();




	system("pause");
	return EXIT_SUCCESS;
}

void func(void)
{
    printf("\n");
    printf("���ϸ� : %s\n", __FILE__);
    printf("�Լ��� : %s\n", __FUNCTION__);
    printf("���ȣ : %d\n", __LINE__);

}