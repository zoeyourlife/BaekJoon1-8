#include <stdio.h>
int main()
{
	double a, b; //������ �Ҽ��� 9�ڸ� �̻� ����̾����Ƿ� double�� ����ؾ���//
	
	scanf("%lf %lf", &a, &b);
	printf("%.9lf\n", a / b);
	return 0;
}