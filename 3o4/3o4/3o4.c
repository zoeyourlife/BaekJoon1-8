#include <stdio.h>
int main()
{
	int N, i, j; //N=��� ° �ٿ� �� ���� ���� �׸�����.
	scanf("%d", &N);// N�� �Է¹���
	for (i = 0;i < N;i++) {   
		for (j = 0;j <= i;j++) //j�� i�� ũ�� ���� ������ ������Ű�鼭 ���� ��� ���� Ŀ���ٸ� �ٹٲ� ���ڸ� �����Ѵ�.
			printf("*");
		printf("\n");
	}
	return 0;
}