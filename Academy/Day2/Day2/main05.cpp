#include<iostream>

using namespace std;

int main()
{
	int num1, num2, kind;
	float result;

	printf("���� 1�� �Է����ּ���.\n");
	scanf_s("%d", &num1);
	
	printf("���� 2�� �Է����ּ���.\n");
	scanf_s("%d", &num2);

	printf("� ������ �����ұ��? (1. +, 2. -, 3. x, 4. /)\n");
	scanf_s("%d", &kind);

	if (kind == 1)
	{
		result = num1 + num2;
	}
	else if (kind == 2)
	{
		result = num1 - num2;
	}
	else if (kind == 3)
	{
		result = num1 * num2;
	}
	else if (kind == 4)
	{
		result = num1 / (float)num2;
	}
	else
	{
		printf("�߸��� ���ڸ� �Է��ϼ̽��ϴ�.\n");
	}

	printf("���� ����� %.2f�Դϴ�.", result);
}

/*
	������ + - * /

*/