#include <stdio.h>
int main()   //strlen �Լ��� ���ڿ� ���̸� ���ϴ� �Լ�.
{
	char string[100]; //���ڿ� �ڷ��� char�� ���� ũ�Ⱑ 100�� �迭 ����
	int i = 0, length = 0; // ���� ������ ������ ���� length=0 ����
	scanf("%s", string); //scanf�� ���ڿ� �Է�

	length = strlen(string); //���ڿ��� ���̸� �޴´�. 
	for (i = 0;i < length;i++) {   //for ���� length���� ������.
		printf("%c", string[i]);  //printf�� string[i]�� ����� ��
		if ((i+1) % 10 == 0)  //(i+1)%10==0�̸�
			printf("\n"); //�ٹٲ����ش�.
	}
	return 0;
}