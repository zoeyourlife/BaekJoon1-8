#include <stdio.h>
int main()
{
	int n, i ; //���� ����
	int sum = 0; //sum������ 0���� �ʱ�ȭ
	scanf("%d", &n); //n�� �Է�

	for (i = 1;i <= n;i++) //i�� n�� �ɶ����� ������Ų��.
		sum += i; //�� ���� �հ��  sum+i�� sum�� ��� �����Ų��.
	printf("%d\n", sum); //sum�� ���.
	return 0;
}