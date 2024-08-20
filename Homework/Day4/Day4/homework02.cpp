#include<iostream>

using namespace std;

enum class RockScissorPaper
{
	Scissor,
	Rock,
	Paper,
	End
};

void main()
{
	int hand[2] = {};
	int comHand[2] = {};

	srand(time(NULL));

	for (int i = 0; i < 2; i++) //사용자 선택 및 선택지 출력
	{
		cout << "가위(0), 바위(1), 보(2) 중 하나를 선택해주십시오." << endl;
		cin >> hand[i];

		if (hand[i] == (int)RockScissorPaper::Scissor)
		{
			cout << i + 1 << " 번째 선택은 가위입니다." << endl;
		}
		else if (hand[i] == (int)RockScissorPaper::Rock)
		{
			cout << i + 1 << " 번째 선택은 바위입니다." << endl;
		}
		else if (hand[i] == (int)RockScissorPaper::Paper)
		{
			cout << i + 1 << " 번째 선택은 보자기입니다." << endl;
		}
		else
		{
			cout << "잘못된 숫자를 입력하셨습니다." << endl;
			exit(0);
		}
	}

	for (int i = 0; i < 2; i++) //컴퓨터 선택
	{
		comHand[i] = rand() % (int)RockScissorPaper::End;
	}

	for (int i = 0; i < 2; i++) // 컴퓨터 선택지 출력
	{
		cout << "컴퓨터의 " << i + 1 << " 번째 선택은 ";

		if (comHand[i] == (int)RockScissorPaper::Scissor)
		{
			cout << "가위입니다." << endl;
		}
		else if (comHand[i] == (int)RockScissorPaper::Rock)
		{
			cout << "바위입니다." << endl;
		}
		else if (comHand[i] == (int)RockScissorPaper::Paper)
		{
			cout << "보자기입니다." << endl;
		}
	}
	
	cout << endl << "플레이어의 선택은 "; //플레이어 선택 정리 출력
	
	if (hand[0] == (int)RockScissorPaper::Scissor)
	{
		if (hand[1] == (int)RockScissorPaper::Scissor)
		{
			cout << "가위와 가위입니다." << endl;
		}
		else if (hand[1] == (int)RockScissorPaper::Rock)
		{
			cout << "가위와 바위입니다." << endl;
		}
		else if (hand[1] == (int)RockScissorPaper::Paper)
		{
			cout << "가위와 보자기입니다." << endl;
		}
	}
	else if (hand[0] == (int)RockScissorPaper::Rock)
	{
		if (hand[1] == (int)RockScissorPaper::Scissor)
		{
			cout << "바위와 가위입니다." << endl;
		}
		else if (hand[1] == (int)RockScissorPaper::Rock)
		{
			cout << "바위와 바위입니다." << endl;
		}
		else if (hand[1] == (int)RockScissorPaper::Paper)
		{
			cout << "바위와 보자기입니다." << endl;
		}
	}
	else if (hand[0] == (int)RockScissorPaper::Paper)
	{
		if (hand[1] == (int)RockScissorPaper::Scissor)
		{
			cout << "보자기와 가위입니다." << endl;
		}
		else if (hand[1] == (int)RockScissorPaper::Rock)
		{
			cout << "보자기와 바위입니다." << endl;
		}
		else if (hand[1] == (int)RockScissorPaper::Paper)
		{
			cout << "보자기와 보자기입니다." << endl;
		}
	}
	
	cout << "컴퓨터의 선택은 "; //컴퓨터 선택 정리 출력

	if (comHand[0] == (int)RockScissorPaper::Scissor)
	{
		if (comHand[1] == (int)RockScissorPaper::Scissor)
		{
			cout << "가위와 가위입니다." << endl;
		}
		else if (comHand[1] == (int)RockScissorPaper::Rock)
		{
			cout << "가위와 바위입니다." << endl;
		}
		else if (comHand[1] == (int)RockScissorPaper::Paper)
		{
			cout << "가위와 보자기입니다." << endl;
		}
	}
	else if (comHand[0] == (int)RockScissorPaper::Rock)
	{
		if (comHand[1] == (int)RockScissorPaper::Scissor)
		{
			cout << "바위와 가위입니다." << endl;
		}
		else if (comHand[1] == (int)RockScissorPaper::Rock)
		{
			cout << "바위와 바위입니다." << endl;
		}
		else if (comHand[1] == (int)RockScissorPaper::Paper)
		{
			cout << "바위와 보자기입니다." << endl;
		}
	}
	else if (comHand[0] == (int)RockScissorPaper::Paper)
	{
		if (comHand[1] == (int)RockScissorPaper::Scissor)
		{
			cout << "보자기와 가위입니다." << endl;
		}
		else if (comHand[1] == (int)RockScissorPaper::Rock)
		{
			cout << "보자기와 바위입니다." << endl;
		}
		else if (comHand[1] == (int)RockScissorPaper::Paper)
		{
			cout << "보자기와 보자기입니다." << endl;
		}
	}

	int playerChoice = 0;
	int comChoice = rand() % 2;
		
	//사용자 최종 선택 및 선택지 출력
	cout << endl << "무엇을 내시겠습니까? (1: 첫 번째 선택, 2: 두 번째 선택)" << endl;
	cin >> playerChoice;
	playerChoice--;

	if (playerChoice == 0)
	{
		if (hand[0] == (int)RockScissorPaper::Scissor)
		{
			cout << "가위를 선택하셨습니다." << endl;
		}
		else if (hand[0] == (int)RockScissorPaper::Rock)
		{
			cout << "바위를 선택하셨습니다." << endl;
		}
		else if (hand[0] == (int)RockScissorPaper::Paper)
		{
			cout << "보자기를 선택하셨습니다." << endl;
		}
	}
	else if (playerChoice == 1)
	{
		if (hand[1] == (int)RockScissorPaper::Scissor)
		{
			cout << "가위를 선택하셨습니다." << endl;
		}
		else if (hand[1] == (int)RockScissorPaper::Rock)
		{
			cout << "바위를 선택하셨습니다." << endl;
		}
		else if (hand[1] == (int)RockScissorPaper::Paper)
		{
			cout << "보자기를 선택하셨습니다." << endl;
		}
	}
	else
	{
		cout << "잘못된 숫자를 입력하셨습니다." << endl;
		exit(0);
	}

	//컴퓨터 최종 선택지 출력
	cout << "컴퓨터는 ";

	if (comChoice == 0)
	{
		if (comHand[0] == (int)RockScissorPaper::Scissor)
		{
			cout << "가위를 선택했습니다." << endl;
		}
		else if (comHand[0] == (int)RockScissorPaper::Rock)
		{
			cout << "바위를 선택했습니다." << endl;
		}
		else if (comHand[0] == (int)RockScissorPaper::Paper)
		{
			cout << "보자기를 선택했습니다." << endl;
		}
	}
	else if (comChoice == 1)
	{
		if (comHand[1] == (int)RockScissorPaper::Scissor)
		{
			cout << "가위를 선택했습니다." << endl;
		}
		else if (comHand[1] == (int)RockScissorPaper::Rock)
		{
			cout << "바위를 선택했습니다." << endl;
		}
		else if (comHand[1] == (int)RockScissorPaper::Paper)
		{
			cout << "보자기를 선택했습니다." << endl;
		}
	}

	//승패 판정
	if (hand[playerChoice] == comHand[comChoice])
	{
		cout << "비겼습니다." << endl;
	}
	else if (hand[playerChoice] == (int)RockScissorPaper::Scissor && comHand[comChoice] == (int)RockScissorPaper::Rock)
	{
		cout << "패배했습니다." << endl;
	}
	else if (hand[playerChoice] == (int)RockScissorPaper::Rock && comHand[comChoice] == (int)RockScissorPaper::Paper)
	{
		cout << "패배했습니다." << endl;
	}
	else if (hand[playerChoice] == (int)RockScissorPaper::Paper && comHand[comChoice] == (int)RockScissorPaper::Scissor)
	{
		cout << "패배했습니다." << endl;
	}
	else
	{
		cout << "승리했습니다." << endl;
	}
}

/*
	2. 가위바위보 하나 빼기
	+ enum 관련 내용 한번 찾아보기

	수도코드
	선언 enum class
	선언 hand comhand 배열
	srand 값 설정
	for문 comhand 값 입력
	for문 hand 값 받아서 입력
	cout 플레이어는 - 선택
	cout 컴퓨터는 - 선택
	cout 최종선택
	선언 playerchoice, comchocie
	cin palyerchoice
	comchoice 랜덤선언
	cout 플레이어 - 선택
	cout 승패판정

	반복 횟수가 적은 경우엔 반복문을 쓰지 않고 하나씩 적는 게 더 효율적인가?
	가독성 측면에선 for문이 더 나을 것 같기도

	수도코드 작성해놓고 코딩하긴 했는데, 작성하면서 수정 및 추가를 너무 많이 해서
	수도코드랑 완전 딴판인 코드가 되어버린...
	플레이어 입장에서 선택을 한번 정리해주는 게 나을 것 같아서 출력을 추가했는데,
	너무 복잡스럽게 짰나 싶기도. 가독성 나름 생각한다고 한 건데, 같은 게 반복되니까
	오히려 가독성 떨어지는 것 같기도 해서 뭐가 정답인지 모르겠다. 여튼 일단 과제 끝~

*/