#include <stdio.h>
int main()
{
	int n, i ; //변수 선언
	int sum = 0; //sum변수를 0으로 초기화
	scanf("%d", &n); //n을 입력

	for (i = 1;i <= n;i++) //i를 n이 될때까지 증가시킨다.
		sum += i; //그 때의 합계는  sum+i를 sum에 계속 저장시킨다.
	printf("%d\n", sum); //sum을 출력.
	return 0;
}