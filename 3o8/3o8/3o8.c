#include <stdio.h>
int main()
{
	int m, d, i;
	scanf("%d %d", &m, &d);

	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; // int�� month��� ������ 12����ŭ�� ������ �� �ִ� �迭�� ����.
	int m_d = 0; // ���� �ʱ�ȭ
	int date = 0; // ���� �ʱ�ȭ

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