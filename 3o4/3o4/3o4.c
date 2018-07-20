#include <stdio.h>
int main()
{
	int N, i, j; //N=몇번 째 줄에 몇 개의 별을 그리는지.
	scanf("%d", &N);// N을 입력받음
	for (i = 0;i < N;i++) {   
		for (j = 0;j <= i;j++) //j가 i가 크지 않을 때까지 증가시키면서 별을 찍고 만약 커진다면 줄바꿈 문자를 실행한다.
			printf("*");
		printf("\n");
	}
	return 0;
}