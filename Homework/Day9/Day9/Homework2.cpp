#include<iostream>
#include<Windows.h>
#include"CardGame.h"
using namespace std;

void main()
{
	CardGame* cardGame = new CardGame();
	cardGame->Init();

	while (cardGame->_isGamePlaying)
	{
		cardGame->BattingMoney();

		cardGame->ShuffleCard();
		cardGame->GetThreeCard();

		cardGame->BattingCard();

		cardGame->CheckCard();
		cardGame->CalculateMoney();

		cardGame->PrintGameResult();

		cardGame->IsGamePlaying();
		cardGame->_cardNum = 0;

		Sleep(3000);
		system("cls");
	}
	

	cardGame->Release();
	delete cardGame;
	cardGame = nullptr;
}

/*
	2. 트럼프 카드 게임
	- 1. 배팅을 합니다.
	- 2. 카드 3장을 뽑아서 3번 카드가 1번과 2번 카드 사이의 값인지 맞추는 게임
		ex. 1번 카드가 10, 2번 카드가 3, 3번 카드가 5
		> 3번 카드가 1, 2번 카드 사이에 있으니 배팅 성공, 배팅한 돈 x2
*/