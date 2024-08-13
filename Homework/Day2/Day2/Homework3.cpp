#include<iostream>

using namespace std;

int main()
{
	int num, result;

	printf("숫자를 입력해주십시오.\n");
	scanf_s("%d", &num);

	result = num % 2;

	if (result == 0)
	{
		printf("%d는 짝수입니다.\n", num);
	}
	else
	{
		printf("%d는 홀수입니다.\n", num);
	}
}

/*
	3. 홀수짝수 판별기
	출력 예시
	숫자를 입력해주세요. [14]
	14는 짝수입니다.
*/