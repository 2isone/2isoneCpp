#include<iostream>

using namespace std;

/*
	C의 enum
enum eRockScissorPaper
{
	SCISSOR = 0,
	ROCK,
	PAPER,
	RSP_END
};

	C의 enum (옛날 방식)은 변수명이 겹치게 될 경우, 오류 발생
	이를 막기 위해 RSP_ 등 태그를 달아도 저 태그 자체가 중복되는 경우가 생겨
	지금은 잘 사용하지 않음
*/

//C++의 enum
enum class RockScissorPaper
{
	Scissor,
	Rock,
	Paper,
	End
};

void main()
{
	srand(time(NULL));
	printf("가위(0), 바위(1), 보(2) 중에서 선택해주세요\n");
	int playerHand = 0;
	int comHand = 0;

	scanf_s("%d", &playerHand);

	comHand = rand() % (int)RockScissorPaper::End;

	// 플레이어 출력
	if (playerHand == (int)RockScissorPaper::Scissor)
	{
		printf("플레이어는 가위를 선택하셨습니다.\n");
	}
	else if (playerHand == (int)RockScissorPaper::Rock)
	{
		printf("플레이어는 바위를 선택하셨습니다.\n");
	}
	else if (playerHand == (int)RockScissorPaper::Paper)
	{
		printf("플레이어는 보를 선택하셨습니다.\n");
	}

	// 컴퓨터 출력
	if (comHand == (int)RockScissorPaper::Scissor)
	{
		printf("컴퓨터는 가위를 선택하셨습니다.\n");
	}
	else if (comHand == (int)RockScissorPaper::Rock)
	{
		printf("컴퓨터는 바위를 선택하셨습니다.\n");
	}
	else if (comHand == (int)RockScissorPaper::Paper)
	{
		printf("컴퓨터는 보를 선택하셨습니다.\n");
	}

	// 승패 판정
	if (playerHand == comHand)
	{
		printf("비겼습니다.\n");
	}
	else if (playerHand == (int)RockScissorPaper::Scissor && comHand == (int)RockScissorPaper::Rock)
	{
		printf("졌습니다.\n");
	}
	else if (playerHand == (int)RockScissorPaper::Rock && comHand == (int)RockScissorPaper::Paper)
	{
		printf("졌습니다.\n");
	}
	else if (playerHand == (int)RockScissorPaper::Paper && comHand == (int)RockScissorPaper::Scissor)
	{
		printf("졌습니다.\n");
	}
	else
	{
		printf("이겼습니다.\n");
	}
}

/*
	수도코드 (웬만하면 실제 룰과 똑같이 움직이는게 좋습니다.)
	[출력] 가위(0), 바위(1), 보(2) 중에서 선택해주세요
	[입력] playerHand
	[로직] comHand = rand()%3
	[출력] [playerHand]를 선택하셨습니다. 
	[출력] 컴퓨터는 [comHand]를 선택하셨습니다. 
	[IF] (playerHand == comHand)
			비겼습니다.
	[IF] (playerHand == 0 && comHand == 1)
			졌습니다.
	[IF] (playerHand == 1 && comHand == 2)
			졌습니다.
	[IF] (playerHand == 2 && comHand == 0)
			졌습니다.
	[ELSE] 
			이겼습니다.

	변수선언
	[자료형] 변수명 = 값;

	기본 자료형 : int, float, char, bool
	사용자 정의 자료형 : enum(정수형)
	
	매직 넘버 - 작성자 말고는 그 누구도 알아볼 수 없는 위험한 숫자
	ex. 0, 1, 2 코드 중간에 나오는 일반적인 숫자
	안 좋은 습관이므로 변수명이나 다른 enum으로 대체해줘야 함 > 가독성 증가

*/