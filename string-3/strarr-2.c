#define _CRT_SECURE_NO_WARNINGS //scanf�� �������� �����ϱ� ����
#include <stdio.h> //��ó���� //printf�� ����ϱ� ����

int main(void)
{
	int i;
	char fruits[3][20]; // 3�� 20�� 
	for (i = 0; i < 3; i++) // 0~2�� �ݺ�
	{
		printf("���� �̸��� �Է��Ͻÿ�: "); 
		scanf("%s", fruits[i]); //scanf�� ���� ���� �̸��� �Է¹ް� fruits[i]�� ������
	}

	for (i = 0; i < 3; i++) // 0~2�� 3�� �ݺ�
		printf("%d��° ����: %s\n", i, fruits[i]); //n��° ���� : [�Է��ߴ� ���� �̸�] ���
	return 0; //���������� ����
}