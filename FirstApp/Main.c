#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNING
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h>


int main()
{

	
	printf("Hello World!\n");
	printf("Hi Second Again!\n");
	printf("I'm Really Happy for you\n\n\n");
	
	printf("%d\n", 10);
	printf("%lf\n", 3.4); //lf�� �Ҽ������� 6�ڸ����� ��Ÿ����.
	printf("%.1lf\n", 3.45); //�Ҽ��� �ڸ� 1�ڸ�����
	printf("%.10lf\n", 3.4); // �Ҽ��� �ڸ� 10�ڸ�����

	printf("%d�� %d�� ���� %d�Դϴ�.\n", 10, 20, 10 + 20);
	printf("%.1lf-%.1lf =%.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	system("pause");
	
	return 0;
}