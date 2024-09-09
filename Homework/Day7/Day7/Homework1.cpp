#include<iostream>

using namespace std;

enum class NumberCompare
{
	Big,
	Small,
	Equal,
	End
};

int card[52] = {};
int userMoney = 10000;
int battingMoney = 0;
int pointNum = 0;
int playerChoice = 0;
int playNum = 0;
int cardNum = 0;
int gameResult = (int)NumberCompare::End;

//함수명 동사로 쓰일 수 있도록 수정
void ShuffleCard();
void ChoiceNumAndBatting();
void PrintCard();
void BattingPrice();
void BattingResult();
void PrintGameResult();
bool IsGameProgress();

void main()
{
	srand(time(NULL));

	cout << "하이로우넘버 게임을 시작합니다." << endl;
	cout << "플레이어가 가진 자금은 " << userMoney << "원입니다." << endl;

	while (IsGameProgress())
	{
		ShuffleCard();
		BattingPrice();
		ChoiceNumAndBatting();

		cout << "뽑힌 카드는 "; //PrintCard 함수에서 뽑힌 카드~ 제거
		PrintCard();
		cout << " 입니다." << endl;

		BattingResult();
		PrintGameResult();
		playNum++;
	}
	
	cout << "게임이 종료되었습니다." << endl;
	
	
}

void ShuffleCard()
{
	for (int i = 0; i < 52; i++)
	{
		card[i] = i;
	}

	for (int i = 0; i < 100000; i++)
	{
		int index1 = rand() % 52;
		int index2 = rand() % 52;

		int temp = card[index1];
		card[index1] = card[index2];
		card[index2] = temp;
	}
}

void ChoiceNumAndBatting()
{
	pointNum = rand() % 10 + 1;
	cout << "카드를 한 장 뽑았습니다." << endl;
	cout << "뽑힌 카드가 " << pointNum << "보다 [크다. / 작다. / 같다.]" << endl;

	while (1)
	{
		cout << "어디에 배팅하시겠습니까? (1. 크다, 2. 작다, 3. 같다.)" << endl;
		cin >> playerChoice;

		if (playerChoice == 1)
		{
			cout << "[크다.]에 배팅하셨습니다." << endl;
			break;
		}
		if (playerChoice == 2)
		{
			cout << "[작다.]에 배팅하셨습니다." << endl;
			break;
		}
		if (playerChoice == 3)
		{
			cout << "[같다.]에 배팅하셨습니다." << endl;
			break;
		}
		else
		{
			cout << "존재하지 않는 선택지입니다." << endl;
		}
	}
}

void PrintCard()
{
	switch (card[playNum]/13)
	{
	case 0:
		cout << "♤";
		break;
	case 1:
		cout << "◆";
		break;
	case 2:
		cout << "♥";
		break;
	case 3:
		cout << "♧";
		break;
	default:
		break;
	}

	cout << " ";

	switch (card[playNum]%13+1)
	{
	case 1:
		cout << "A";
		break;
	case 11:
		cout << "J";
		break;
	case 12:
		cout << "Q";
		break;
	case 13:
		cout << "K";
		break;
	default:
		cout << card[playNum] % 13+1;
		break;
	}
}

void BattingPrice()
{
	bool isWrongBatting = true;

	while (isWrongBatting) // while(1) 수정
	{
		cout << "배팅할 금액을 입력해주십시오." << endl;
		cin >> battingMoney;

		if (userMoney < battingMoney)
		{
			cout << "보유 금액이 부족합니다." << endl;
			cout << "플레이어의 보유 금액은 " << userMoney << "원입니다." << endl;
		}
		else
		{
			cout << battingMoney << "원을 배팅하셨습니다." << endl;
			isWrongBatting = false;
		}
	}
}

void BattingResult()
{
	cardNum = card[playNum] % 13+1;

	if (pointNum < cardNum)
	{
		gameResult = (int)NumberCompare::Big;
	}
	else if (cardNum < pointNum)
	{
		gameResult = (int)NumberCompare::Small;
	}
	else if (cardNum == pointNum)
	{
		gameResult = (int)NumberCompare::Equal;
	}
}

void PrintGameResult()
{
	switch (gameResult)
	{
	case 0:
		cout << "뽑힌 카드가 " << pointNum << "보다 큽니다." << endl;
		break;
	case 1:
		cout << "뽑힌 카드가 " << pointNum << "보다 작습니다." << endl;
		break;
	case 2:
		cout << "뽑힌 카드가 " << pointNum << "과 같습니다." << endl;
		break;
	default:
		break;
	}

	if (gameResult == playerChoice-1)
	{
		cout << "배팅에 성공하셨습니다." << endl;

		if (pointNum == cardNum)
		{
			userMoney = userMoney + (10 * battingMoney);
		}
		else
		{
			userMoney = userMoney + (2 * battingMoney);
		}
	}
	else
	{
		cout << "배팅에 실패하셨습니다." << endl;
		userMoney = userMoney - battingMoney;
	}

	cout << "플레이어의 보유 금액은 " << userMoney << "원입니다." << endl;
}

bool IsGameProgress()
{
	if (userMoney <= 0)
	{
		cout << "보유 자금을 모두 사용하셨습니다." << endl;
		return false;
	}	
	else if (playNum == 51)
	{
		cout << "카드를 모두 뽑았습니다." << endl;
		return false;
	}
	else
	{
		return true;
	}
}

/*
	숙제 - 하이로우세븐, 카드게임 (할 수 있는 사람만)

	1. 트럼프 카드 52장으로 시작, 스페이드 A부터 하트 K까지 존재
	2. 카드를 섞고 플레이어가 입장함, 플레이어는 시작 골드 10000원으로 시작
	3. 플레이어는 베팅을 함, 다음 카드가 n보다 작은지, 큰지, 같은지 베팅
	4. n보다 작은지, 큰지를 맞추면 2배, n과 같은지를 맞추면 10배 지급
	5. 트럼프 카드를 뽑고 섞고 뽑고 섞는 게 아니라 카드를 다 쓸 때까지 계속 뽑음
	6. 카드를 다 쓰거나 플레이어의 골드가 0원이 되면 게임 종료

*/