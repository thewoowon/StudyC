#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNING
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h>


int main()
{
	/*int a = 20, b = 3;
	double res;
	
	res = ((double)a) / ((double)b);
	printf("a = %d, b = %d\n", a, b);
	printf("a / b�� ��� : %.1lf\n", res);

	a = (int)res;
	printf("(int) %.1lf�� ��� : %d\n", res, a);
	*/


	int a = 10;
	double b = 3.4;
	long double ld = 12345678945612378945;

	printf("int�� ������ ũ�� : %d\n", sizeof(a));
	printf("double�� ������ ũ�� : %d\n", sizeof(b));
	printf("������ ����� ũ�� : %d\n", sizeof(10));
	printf("������ �ᱣ���� ũ�� : %d\n", sizeof(1.5+3.4));
	printf("char �ڷ����� ũ�� : %d\n", sizeof(char));
	printf("long double�� ������ ũ�� : %ld\n", sizeof(ld));



	system("pause");
	
	return 0;
}