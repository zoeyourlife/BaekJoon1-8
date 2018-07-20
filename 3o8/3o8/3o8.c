#include <stdio.h>
int main()
{
	int m, d, i;
	scanf("%d %d", &m, &d);

	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; // int형 month라는 변수는 12개만큼을 저장할 수 있는 배열로 선언.
	int m_d = 0; // 변수 초기화
	int date = 0; // 변수 초기화

	for (i = 0;i < m - 1;i++) {
		m_d = m_d + month[i];
	}
	m_d = m_d + d - 1;
	date = m_d % 7;

	if (date == 0) {
		printf("MON");
	}
	else if (date == 1) {
		printf("TUE");
	}
	else if (date == 2) {
		printf("WED");
	}
	else if (date == 3) {
		printf("THU");
	}
	else if (date == 4) {
		printf("FRI");
	}
	else if (date == 5) {
		printf("SAT");
	}
	else if (date == 6) {
		printf("SUN");
	}
}