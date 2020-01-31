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
	printf("%lf\n", 3.4); //lf는 소수점이하 6자리까지 나타낸다.
	printf("%.1lf\n", 3.45); //소수점 자리 1자리까지
	printf("%.10lf\n", 3.4); // 소수점 자리 10자리까지

	printf("%d와 %d의 합은 %d입니다.\n", 10, 20, 10 + 20);
	printf("%.1lf-%.1lf =%.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	system("pause");
	
	return 0;
}