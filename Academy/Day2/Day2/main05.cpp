#include<iostream>

using namespace std;

int main()
{
	int num1, num2, kind;
	float result;

	printf("숫자 1을 입력해주세요.\n");
	scanf_s("%d", &num1);
	
	printf("숫자 2을 입력해주세요.\n");
	scanf_s("%d", &num2);

	printf("어떤 연산을 진행할까요? (1. +, 2. -, 3. x, 4. /)\n");
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
		printf("잘못된 숫자를 입력하셨습니다.\n");
	}

	printf("연산 결과는 %.2f입니다.", result);
}

/*
	연산자 + - * /

*/