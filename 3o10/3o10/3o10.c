#include <stdio.h>
int main()       // int자료형 하나로 해결 x, 문자열을 이용하거나 한 자리의 정수를 반복해서 입력받으면 된다.
{
	int n, x, sum = 0;
	scanf("%d", &n); //정수의 개수를 의미
	for (int i = 0;i < n;i++) { //i 반복문
		scanf("%1d", &x); //한 자리 숫자 N개 , "%1d"는 1자리의 정수 단위로 입력받는 방법
		sum += x; // sum+x =sum에 저장.
	}
	printf("%d\n", sum); //sum을 출력
}