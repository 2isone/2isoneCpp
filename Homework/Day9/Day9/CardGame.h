#pragma once
class CardGame
{
public:
	void Init();
	void Release();

	void BattingMoney();
	void PrintCard();
	void ShuffleCard();
	void GetThreeCard();
	void CheckCard();
	void BattingCard();
	void CalculateMoney();
	void PrintGameResult();
	void ResetNumbers();
	void IsGamePlaying();

public:
	bool _isGamePlaying = true;
	int _userMoney = 10000;
	int _battingMoney = 0;
	int _card[52] = {};
	int _cardNum = 0;
	int _cardCheck[3] = {};
	int _userChoice = 0;
	bool _isPlayerWin = true;
};

