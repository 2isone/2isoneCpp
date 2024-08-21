#include<iostream>

using namespace std;

enum class ERockScissorPaper
{
	Scissor,
	Rock,
	Paper,
	End
};

void main()
{
	int hand[2] = {};
	cout << "가위(0), 바위(1), 보(2) 중에 낼것을 두개 골라주세요." << endl;
	for (int i = 0; i < 2; i++)
	{
		cin >> hand[i];
	}

	int comHand[2] = {};
	srand(time(NULL));

	for (int i = 0; i < 2; i++)
	{
		comHand[i] = rand() % 3;
	}

	cout << "내가 낸것 : ";
	for (int i = 0; i < 2; i++)
	{
		if (hand[i] == (int)ERockScissorPaper::Rock)
		{
			cout << "바위 ";
		}
		else if (hand[i] == (int)ERockScissorPaper::Scissor)
		{
			cout << "가위 ";
		}
		else
		{
			cout << "보 ";
		}
	}
	cout << endl;

	cout << "컴퓨터가 낸것 : ";
	for (int i = 0; i < 2; i++)
	{
		if (comHand[i] == (int)ERockScissorPaper::Rock)
		{
			cout << "바위 ";
		}
		else if (comHand[i] == (int)ERockScissorPaper::Scissor)
		{
			cout << "가위 ";
		}
		else
		{
			cout << "보 ";
		}
	}
	cout << endl;

	cout << "왼손(0)과 오른손(1) 중에 골라주세요." << endl;
	int handChoice;
	cin >> handChoice;

	int finalHand[2] = {};
	finalHand[0] = hand[handChoice];
	finalHand[1] = comHand[rand() % 2];

	cout << "최종적으로 낸것" << endl;
	for (int i = 0; i < 2; i++)
	{
		if (i == 0)
		{
			cout << "플레이어 : ";
		}
		else if (i == 1)
		{
			cout << "컴퓨터 : ";
		}

		if (finalHand[i] == (int)ERockScissorPaper::Rock)
		{
			cout << "바위" << endl;
		}
		else if (finalHand[i] == (int)ERockScissorPaper::Scissor)
		{
			cout << "가위" << endl;
		}
		else
		{
			cout << "보" << endl;
		}
	}

	if (finalHand[0] == finalHand[1])
	{
		cout << "비겼습니다." << endl;
	}
	else if (finalHand[0] == (int)ERockScissorPaper::Scissor &&
		finalHand[1] == (int)ERockScissorPaper::Rock)
	{
		cout << "패배했습니다." << endl;
	}
	else if (finalHand[0] == (int)ERockScissorPaper::Rock &&
		finalHand[1] == (int)ERockScissorPaper::Paper)
	{
		cout << "패배했습니다." << endl;
	}
	else if (finalHand[0] == (int)ERockScissorPaper::Paper &&
		finalHand[1] == (int)ERockScissorPaper::Scissor)
	{
		cout << "패배했습니다." << endl;
	}
	else
	{
		cout << "승리했습니다." << endl;
	}
}

/*
	숙제 못한 경우
	- 하고 싶은데 어려워서
	- 어떻게 건드려야 할지 모르겠어서
	수도코드 작성
	지금 단계에서는 코드로 변환하는 능력까진 없어도 무방
	회사에서 비주류 언어 사용할 경우, 수도코드를 작성할 줄 알면
	구글에 검색해가면서 코딩할 수 있음
	프로그래밍은 에피소드 형식이 아님
	놓치지 않고 제때제때 소화할 수 있게 해야 함

	가위바위보 하나 빼기 풀이
	수도코드
	int arr[10]
	arr[1] ~ arr[10] (x)
	arr[0] ~ arr[9] (o)
	
	내가 낼것 2개를 정한다.
	hand[2]  -> hand[0], hand[1]
	컴퓨터가 낼것 2개를 정한다.
	comHand[2]

	내가 낸것 2개를 출력한다.
	컴퓨터가 낸것 2개를 출력한다

	그다음 내가 왼손을 낼건지 오른손을 낼건지 결정한다.
	컴퓨터도 랜덤으로 왼손과 오른손중에 결정한다.
	
	최종적으로 낸손을 서로 비교하여 승패판정을 내린다.

	내가 낼것 2개를 정한다.
	2개를 정하면 -> 정한 내용을 기억
	변수를 선언해서 기억
	2개이기 때문에 배열을 활용하는게 좋다.
	
	프로그래밍을 더 적은 글 수로 하면 얻는 이득
	- 주요 로직이 한번에 보이기 때문에 가독성 증가
	- 근데 글 수 줄이겠다고 옆으로 적으면 드래그 해서 봐야 함,
	보편적 형태도 아님, 오히려 가독성이 깨짐
	이러면 변수명을 잘 지을 필요가 없어짐 (나쁜 의미로)

	좋은 프로그래밍의 조건
	1. 가독성
	2. 퍼포먼스
	3. 유지보수성
	4. 생산성

*/