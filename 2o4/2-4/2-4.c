#include <stdio.h>
int main()
{
	double a, b; //문제에 소수점 9자리 이상 출력이었으므로 double을 사용해야함//
	
	scanf("%lf %lf", &a, &b);
	printf("%.9lf\n", a / b);
	return 0;
}