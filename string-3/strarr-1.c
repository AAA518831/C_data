#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i; //for ���忡 �� ���� ����
	char ex[4][5] = { //4�� 5��(��ǻ�ʹ� 0���� ������)
		"abc", //0��
		"xyz", //1��
		"kkkk", //2��
		"love" //3��
	};
	//printf("%c\n", ex[1][2]); //1�� 2���� �ִ� �� ����(z)�� ���
	//printf("%c\n", ex[3][3]); //3�� 3���� �ִ� �� ����(e)�� ���
	//printf("%s\n", ex[1]); //1�� ��ü(xyz)�� ���, ���ڿ��̱� ������ %s ���
	//scanf("%c", &ex[0][3]); //0�� 3�� ��� �Է½� '&' �߰�
	//printf("%c\n", ex[0][3]); //�� ��� ��� %c
	//printf("%s\n", ex[0]); //�� �� ��� %s 
	scanf("%s", ex[2]);
	printf("%s\n", ex[2]);


	return 0;
}

