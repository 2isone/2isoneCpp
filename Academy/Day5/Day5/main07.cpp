#include<iostream>

using namespace std;

enum class ERockScissorPaper
{
	Rock,
	Scissor,
	Paper,
	End
};

int myHand = 0;
int comHand = 0;

void PrintMyHand()
{
	cout << "내가 낸것 : ";
	if (myHand == (int)ERockScissorPaper::Rock)
	{
		cout << "바위" << endl;
	}
	else if (myHand == (int)ERockScissorPaper::Scissor)
	{
		cout << "가위" << endl;
	}
	else if (myHand == (int)ERockScissorPaper::Paper)
	{
		cout << "보" << endl;
	}
}

void PrintComHand()
{
	cout << "상대가 낸것 : ";
	if (comHand == (int)ERockScissorPaper::Rock)
	{
		cout << "바위" << endl;
	}
	else if (comHand == (int)ERockScissorPaper::Scissor)
	{
		cout << "가위" << endl;
	}
	else if (comHand == (int)ERockScissorPaper::Paper)
	{
		cout << "보" << endl;
	}
}


void main()
{
	cout << "내가 낼것을 골라주세요 (0 가위, 1바위, 2보)" << endl;
	cin >> myHand;

	srand(time(NULL));
	comHand = rand() % 3;

	PrintMyHand();
	PrintComHand();

}

/*
	함수
	기본형태
	void 함수명()
	{
		함수내용
	}
	C++에서는 main 함수 위에 위치해야함

	사용할 때는 함수명();
	함수명 컨벤션
	동사로 이름을 짓고 파스칼 케이스로 작성
	(대문자로 시작해, 띄어쓰기 부분마다 대문자)

	헤더파일
	ENUM문
	변수선언
	함수선언
	메인함수
	순으로 작성할 것
*/