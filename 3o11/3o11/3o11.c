#include <stdio.h>
int main()   //strlen 함수는 문자열 길이를 구하는 함수.
{
	char string[100]; //문자열 자료형 char형 변수 크기가 100인 배열 선언
	int i = 0, length = 0; // 길이 저장할 정수형 변수 length=0 선언
	scanf("%s", string); //scanf로 문자열 입력

	length = strlen(string); //문자열의 길이를 받는다. 
	for (i = 0;i < length;i++) {   //for 문을 length까지 돌린다.
		printf("%c", string[i]);  //printf로 string[i]를 찍어준 후
		if ((i+1) % 10 == 0)  //(i+1)%10==0이면
			printf("\n"); //줄바꿈해준다.
	}
	return 0;
}