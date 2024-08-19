#include<iostream>

using namespace std;

void main()
{
	float height, weight, bmi;

	printf("키(m)를 입력해주십시오.\n");
	scanf_s("%f", &height);

	printf("몸무게(kg)를 입력해주십시오.\n");
	scanf_s("%f", &weight);

	bmi = weight / (height * height);

	printf("BMI 지수: %.2f\n", bmi);

	if (bmi <= 18.5)
	{
		printf("저체중 입니다.\n");
	}
	else if (bmi <= 23)
	{
		printf("정상 체중 입니다.\n");
	}
	else if (bmi <= 25)
	{
		printf("과체중 입니다.\n");
	}
	else if (bmi <= 30)
	{
		printf("비만 입니다.\n");
	}
	else
	{
		printf("고도 비만 입니다.\n");
	}

}

/*
	1. BMI 측정 프로그램 만들기
	출력예시
	키(m)를 입력해주세요.
	몸무게 (kg)을 입력해주세요.
	BMI 지수 : 24.5
	과체중입니다. (0 ~ 18.5 저체중, ~ 23 정상체중, ~25 과체중 , ~30 비만, ~ 무한대 고도비만)
*/