#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNING
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h>


int main()
{

	short sh = 32767;
	int in = 2147483647;
	long ln = 2147483647123;
	long long lln = 12345123412345;
	unsigned int uin = 4294967294;

	printf("short 최대값 : %d\n", sh);
	printf("int 최대값 : %d\n", in);
	printf("long 최대값 : %ld\n", ln);
	printf("long long 최대값 : %lld\n", lln);
	printf("long long형의 크기 : %d바이트\n", sizeof(long long));
	printf("unsigned int의 최대값 : %u\n", uin);
	uin = -1;
	printf("unsigned int의 현재값 : %u\n", uin);

	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;

	printf("float형 변수의 값 : %.20f\n", ft);
	printf("double형 변수의 값 : %.20lf\n", db);

	


	system("pause");
	return 0;
}