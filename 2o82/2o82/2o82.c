#include <stdio.h>
int main()
{
	int S, Num_3 = 0, Num_5 = -1; //S=���� , Num_3= 3kg ���� ��������, Num_5= 5kg ���� ��������
	int i; //�ݺ��� ���� ���� ����
	scanf("%d", &S); //��ü ���� S kg �Է�
	if (S % 5 == 0) //5KG ������ �ִ��� ��ƺ���, �������ٸ� ���
	{
		Num_5 = S / 5; //��ü ���� Skg�� 5kg���θ� ���� �� ���� ���� 5kg ���� ����
		printf("%d", Num_5); //5kg ���� ���� ���
	}
	else //5kg�������� ������ �������� ���� ��
	{
		for (i = S / 5;i >= 0;i--) //5Kg ������ ��Ȯ�ϰ� �������� �ʴ� ���, �ϳ��� �ٿ����鼭 3Kg������ ��´�.
		{
			if ((S - 5 * i) % 3 == 0) //���� 3Kg������ �������ٸ� �׶��� 5Kg, 3Kg������ �� ���� �� break�� ����.
			{
				Num_5 = i; //�׶��� 5kg ���������� S/5�� �� �� i��
				Num_3 = (S - (5 * i)) / 3; //3kg���� ����= ��ü��(5kg����*����)�� 3���� ���� ��
				break; //�ݺ��� Ż��
			}
		}
		printf("%d", Num_3 + Num_5); //5Kg������ 3Kg������ ���� ���� ���� ���.
	}
}