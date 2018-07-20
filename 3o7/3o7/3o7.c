#include <stdio.h>
int main()
{
	int n, i, j;
	scanf("%d", &n);

	for (i = 0;i < n;i++) { // 1. i가 n보다 작을 때 동안 i를 증가시키면서
		for (j = 0;j < i;j++) // 2. j가 i보다 작을 때 동안 j를 증가시키면서
			printf(" "); // 3. " "= 빈 칸을 출력.
		for (j = n;j > i;j--) // 4. j가 n이고 i보다 클 때 동안 j를 감소시키면서
			printf("*"); // 5. *을 출력.
		printf("\n"); // 6. 개행 시켜줌
	}
	return 0; // ex) n=3, 1-(4-5-4-5-4-5-6)-1-(2-3-4-5-4-5-6)-1-(2-3-2-3-4-5-6)
}