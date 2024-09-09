#include "CardGame.h"
#include<iostream>
using namespace std;

enum class BattingResult
{
	Yes,
	No,
	End
};

void CardGame::Init()
{
	srand(time(NULL));
	cout << "트럼프 카드 게임을 시작합니다." << endl;
}
void CardGame::Release()
{
	cout << "보유 금액을 모두 사용하셨습니다." << endl;
	cout << "트럼프 카드 게임이 종료되었습니다." << endl;
}

void CardGame::BattingMoney()
{	
	bool isWrongMoney = true;

	while (isWrongMoney)
	{
		cout << "배팅할 금액을 입력해주십시오." << endl;
		cin >> _battingMoney;

		if (_userMoney < _battingMoney)
		{
			cout << "배팅 금액은 보유 금액을 초과할 수 없습니다." << endl;
			cout << "플레이어의 보유 금액은 " << _userMoney << "원입니다." << endl;
		}
		else
		{
			cout << _battingMoney << "원을 배팅하셨습니다." << endl;
			isWrongMoney = false;
		}
	}	
}
void CardGame::PrintCard()
{
	switch (_card[_cardNum] / 13)
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

	switch (_card[_cardNum] % 13 + 1)
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
		cout << _card[_cardNum] % 13 + 1;
		break;
	}
}
void CardGame::ShuffleCard()
{
	for (int i = 0; i < 52; i++)
	{
		_card[i] = i;
	}

	for (int i = 0; i < 10000; i++)
	{
		int index1 = rand() % 52;
		int index2 = rand() % 52;

		int temp = _card[index1];
		_card[index1] = _card[index2];
		_card[index2] = temp;
	}
}
void CardGame::GetThreeCard()
{
	for (int i = 0; i < 2; i++)
	{
		cout << i + 1 << "번 카드는 ";
		PrintCard();
		cout << "입니다." << endl;
		_cardCheck[i] = _card[_cardNum] % 13 + 1;
		_cardNum++;
	}
	_cardCheck[2] = _card[_cardNum] % 13 + 1;
}
void CardGame::CheckCard()
{
	cout << "3번 카드는 ";
	PrintCard();
	cout << " 입니다." << endl;
	
	int resultCheck = 0;

	if (_cardCheck[0] < _cardCheck[1])
	{
		if (_cardCheck[0] < _cardCheck[2] && _cardCheck[2] < _cardCheck[1])
		{
			cout << "3번 카드가 1번 카드와 2번 카드 사이에 있습니다." << endl;
			resultCheck = (int)BattingResult::Yes;
		}
		else
		{
			cout << "3번 카드가 1번 카드와 2번 카드 사이에 없습니다." << endl;
			resultCheck = (int)BattingResult::No;
		}
	}
	else if (_cardCheck[1] < _cardCheck[0])
	{
		if (_cardCheck[1] < _cardCheck[2] && _cardCheck[2] < _cardCheck[0])
		{
			cout << "3번 카드가 1번 카드와 2번 카드 사이에 있습니다." << endl;
			resultCheck = (int)BattingResult::Yes;
		}
		else
		{
			cout << "3번 카드가 1번 카드와 2번 카드 사이에 없습니다." << endl;
			resultCheck = (int)BattingResult::No;
		}
	}
	else
	{
		cout << "3번 카드가 1번 카드와 1번 카드 사이에 없습니다." << endl;
		resultCheck = (int)BattingResult::No;
	}

	if (resultCheck == _userChoice)
	{
		_isPlayerWin = true;
	}
	else
	{
		_isPlayerWin = false;
	}
}
void CardGame::BattingCard()
{
	bool isWrongChoice = true;

	cout << "3번 카드가 1번 카드와 2번 카드 사이에 있다." << endl;

	while (isWrongChoice)
	{
		cout << "어디에 배팅하시겠습니까? (1번: O, 2번: X)" << endl;
		cin >> _userChoice;
		_userChoice--;

		if (_userChoice == (int)BattingResult::Yes || _userChoice == (int)BattingResult::No)
		{
			cout << _userChoice + 1 << "번을 선택하셨습니다" << endl;
			isWrongChoice = false;
		}
		else
		{
			cout << "선택지가 없습니다. 다시 선택해주십시오." << endl;
		}
	}
}
void CardGame::CalculateMoney()
{
	if (_isPlayerWin)
	{
		_userMoney = _userMoney + (2 * _battingMoney);
	}
	else
	{
		_userMoney = _userMoney - _battingMoney;
	}
}
void CardGame::PrintGameResult()
{
	if (_isPlayerWin)
	{
		cout << "배팅에 성공하셨습니다." << endl;
		cout << "플레이어의 보유 금액은 " << _userMoney << "원 입니다." << endl;
	}
	else
	{
		cout << "배팅에 실패하셨습니다." << endl;
		cout << "플레이어의 보유 금액은 " << _userMoney << "원 입니다." << endl;
	}
}
void CardGame::IsGamePlaying()
{
	if (_userMoney <= 0)
	{
		_isGamePlaying = false;
	}
}