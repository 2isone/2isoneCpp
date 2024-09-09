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
	cout << "Ʈ���� ī�� ������ �����մϴ�." << endl;
}
void CardGame::Release()
{
	cout << "���� �ݾ��� ��� ����ϼ̽��ϴ�." << endl;
	cout << "Ʈ���� ī�� ������ ����Ǿ����ϴ�." << endl;
}

void CardGame::BattingMoney()
{	
	bool isWrongMoney = true;

	while (isWrongMoney)
	{
		cout << "������ �ݾ��� �Է����ֽʽÿ�." << endl;
		cin >> _battingMoney;

		if (_userMoney < _battingMoney)
		{
			cout << "���� �ݾ��� ���� �ݾ��� �ʰ��� �� �����ϴ�." << endl;
			cout << "�÷��̾��� ���� �ݾ��� " << _userMoney << "���Դϴ�." << endl;
		}
		else
		{
			cout << _battingMoney << "���� �����ϼ̽��ϴ�." << endl;
			isWrongMoney = false;
		}
	}	
}
void CardGame::PrintCard()
{
	switch (_card[_cardNum] / 13)
	{
	case 0:
		cout << "��";
		break;
	case 1:
		cout << "��";
		break;
	case 2:
		cout << "��";
		break;
	case 3:
		cout << "��";
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
		cout << i + 1 << "�� ī��� ";
		PrintCard();
		cout << "�Դϴ�." << endl;
		_cardCheck[i] = _card[_cardNum] % 13 + 1;
		_cardNum++;
	}
	_cardCheck[2] = _card[_cardNum] % 13 + 1;
}
void CardGame::CheckCard()
{
	cout << "3�� ī��� ";
	PrintCard();
	cout << " �Դϴ�." << endl;
	
	int resultCheck = 0;

	if (_cardCheck[0] < _cardCheck[1])
	{
		if (_cardCheck[0] < _cardCheck[2] && _cardCheck[2] < _cardCheck[1])
		{
			cout << "3�� ī�尡 1�� ī��� 2�� ī�� ���̿� �ֽ��ϴ�." << endl;
			resultCheck = (int)BattingResult::Yes;
		}
		else
		{
			cout << "3�� ī�尡 1�� ī��� 2�� ī�� ���̿� �����ϴ�." << endl;
			resultCheck = (int)BattingResult::No;
		}
	}
	else if (_cardCheck[1] < _cardCheck[0])
	{
		if (_cardCheck[1] < _cardCheck[2] && _cardCheck[2] < _cardCheck[0])
		{
			cout << "3�� ī�尡 1�� ī��� 2�� ī�� ���̿� �ֽ��ϴ�." << endl;
			resultCheck = (int)BattingResult::Yes;
		}
		else
		{
			cout << "3�� ī�尡 1�� ī��� 2�� ī�� ���̿� �����ϴ�." << endl;
			resultCheck = (int)BattingResult::No;
		}
	}
	else
	{
		cout << "3�� ī�尡 1�� ī��� 1�� ī�� ���̿� �����ϴ�." << endl;
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

	cout << "3�� ī�尡 1�� ī��� 2�� ī�� ���̿� �ִ�." << endl;

	while (isWrongChoice)
	{
		cout << "��� �����Ͻðڽ��ϱ�? (1��: O, 2��: X)" << endl;
		cin >> _userChoice;
		_userChoice--;

		if (_userChoice == (int)BattingResult::Yes || _userChoice == (int)BattingResult::No)
		{
			cout << _userChoice + 1 << "���� �����ϼ̽��ϴ�" << endl;
			isWrongChoice = false;
		}
		else
		{
			cout << "�������� �����ϴ�. �ٽ� �������ֽʽÿ�." << endl;
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
		cout << "���ÿ� �����ϼ̽��ϴ�." << endl;
		cout << "�÷��̾��� ���� �ݾ��� " << _userMoney << "�� �Դϴ�." << endl;
	}
	else
	{
		cout << "���ÿ� �����ϼ̽��ϴ�." << endl;
		cout << "�÷��̾��� ���� �ݾ��� " << _userMoney << "�� �Դϴ�." << endl;
	}
}
void CardGame::IsGamePlaying()
{
	if (_userMoney <= 0)
	{
		_isGamePlaying = false;
	}
}