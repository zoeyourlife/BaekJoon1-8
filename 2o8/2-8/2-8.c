#include <stdio.h>
int main()
{
	int S, Num_3 = 0, Num_5 = -1; //S=설탕
	int i;
	scanf("%d", &S);
	if (S % 5 == 0) //5KG 봉지에 최대한 담아보고, 떨어진다면 출력
	{
		Num_5 = S / 5;
		printf("%d", Num_5);
	}
	else
	{
		for (i = S / 5;i >= 0; i--) //5Kg 봉지에 정확하게 떨어지지 않는 경우, 하나씩 줄여가면서 3KG봉지에 담는다.
		{
			if ((S - 5 * i) % 3 == 0) // 만약 3KG봉지에 떨어진다면 그때의 5KG,3KG봉지의 수 저장 후 break로 나옴.//
			{
				Num_5 = i;
				Num_3 = (S - 5 * i) / 3;
				break;
			}
		}
		printf("%d", Num_3 + Num_5); //5KG봉지와 3KG봉지의 수를 더한 값을 출력.
	}
}