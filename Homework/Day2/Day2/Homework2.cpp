#include<iostream>

using namespace std;

void main()
{
	float middle, final, attend, homework, result;

	printf("중간 평가 점수를 입력해주세요.\n");
	scanf_s("%f", &middle);

	printf("기말 평가 점수를 입력해주세요.\n");
	scanf_s("%f", &final);

	printf("출석 점수를 입력해주세요.\n");
	scanf_s("%f", &attend);

	printf("과제 점수를 입력해주세요.\n");
	scanf_s("%f", &homework);

	result = (middle + final + attend + homework) / 4;
	// 항목 별 적용 비율이 얼마인지 알 수 없으므로, 동일한 비율로 들어간다는 전제하에 작성

	if (result <= 60)
	{
		printf("F 입니다.\n");
	}
	else if (result <= 70)
	{
		printf("D 입니다.\n");
	}
	else if (result <= 80)
	{
		printf("C 입니다.\n");
	}
	else if (result <= 90)
	{
		printf("B 입니다.\n");
	}
	else if (result <= 100)
	{
		printf("A 입니다.\n");
	}
	else
	{
		printf("잘못된 점수를 입력하셨습니다.\n");
	}
}

/*
	2. 학점 계산기
	출력예시
	중간평가 점수를 입력해주세요.
	기말평가 점수를 입력해주세요.
	출석점수를 입력해주세요.
	과제 점수를 입력해주세요.
	F입니다. (0 ~ 60 F, ~ 70 D, ~ 80 C, ~ 90 B, ~ 100 A)
*/
