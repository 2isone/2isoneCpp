﻿#include<iostream>

using namespace std;

void main()
{
	srand(time(NULL));
	int playNum = rand() % 10 + 1;

	cout << "이 게임은 " << playNum << " 라운드 동안 진행됩니다." << endl;
	cout << "행운을 빕니다." << endl << endl;

	int playerLevel = 1;
	int monsterLevel = 1;

	int playerChoice = 0;

	int failPercent = 0;
	int randomPercent = 0;

	for (int i = 1; i <= playNum; i++) //지정된 라운드 수만큼 반복
	{

		cout << i << " 라운드를 시작합니다." << endl;
		cout << "플레이어는 " << playerLevel << " 레벨 입니다." << endl;
		cout << monsterLevel << " 레벨 고블린과 조우했습니다." << endl;
		cout << "원하는 행동을 선택해주십시오. (1: 싸우기, 2: 도망치기)" << endl;
		cin >> playerChoice;

		if (playerChoice == 1) //싸우는 것을 선택한 경우
		{
			failPercent = (float)monsterLevel / (1 + (playerLevel * 2)) * 100; //사망할 확률
			randomPercent = rand() % 100; //랜덤 확률

			cout << "싸우는 것을 선택하셨습니다." << endl;

			/////////////////cout << failPercent << " / " << randomPercent << endl;

			if (randomPercent < failPercent)
			{
				cout << "고블린에게 공격 당해 사망하셨습니다." << endl;
				cout << "플레이어가 사망하여 게임이 종료됩니다." << endl;
				return 0;
			}
			else
			{
				cout << "고블린과의 전투에서 승리했습니다." << endl;
				cout << "플레이어의 레벨이 1 오릅니다." << endl;
				playerLevel++;
			}

		}
		else if (playerChoice == 2) //도망치는 것을 선택한 경우
		{
			randomPercent = rand() % 100; //랜덤 확률
			//////////////////////////cout << 10 << " / " << randomPercent << endl;

			cout << "도망치는 것을 선택하셨습니다." << endl;

			if (randomPercent < 10)
			{
				cout << "고블린에게서 도망치는 것에 실패했습니다." << endl;
				cout << "플레이어가 사망하여 게임이 종료됩니다." << endl;
				return 0;
			}
			else
			{
				cout << "고블린에게서 도망쳤습니다." << endl;
			}
		}
		else
		{
			cout << "입력한 숫자가 지원하는 행동이 없습니다." << endl;
			return 0;
			//주어진 보기가 아닌 다른 숫자를 입력할 경우, 게임에서 퇴장
		}
	
		monsterLevel++;

		cout << endl;
		////////////////cout << playerLevel << " / " << monsterLevel << endl;
	}

	cout << "플레이어는 " << playerLevel << " 레벨로 던전을 탈출했습니다." << endl;
	cout << "축하합니다. " << playNum << " 라운드의 게임을 클리어하셨습니다." << endl;

}

/*
	1. 텍스트 알피지 만들기
	- 내용은 마음대로 수정하세요!
	- 선택과, 랜덤만 들어가면 뭐든 ok입니다!
	- 아스키아트를 활용하면 재미붙일 수 있을거에요.
 
	출력예시)

	플레이어는 1레벨 입니다.
	던전에 입장하였습니다.

	1레벨 고블린과 조우하였습니다.
	(1: 싸우기, 2: 도망가기)

	 -> 싸우기 선택시, (고블린 레벨)/(1+플레이어레벨*2) 확률로 사망
	 -> 사망하면 게임 종료, 전투에서 승리시, 레벨업

	 -> 도망가기 선택시, 10% 확률로 사망
	 -> 사망하면 게임 종료


	2레벨 고블린과 조우하였습니다.
	(1: 싸우기, 2: 도망가기)

	 -> 싸우기 선택시, (고블린 레벨)/(1+플레이어레벨*2) 확률로 사망
	 -> 사망하면 게임 종료, 전투에서 승리시, 레벨업

	 -> 도망가기 선택시, 10% 확률로 사망
	 -> 사망하면 게임 종료

	3레벨 고블린과 조우하였습니다.
	(1: 싸우기, 2: 도망가기)

	 -> 싸우기 선택시, (고블린 레벨)/(1+플레이어레벨*2) 확률로 사망
	 -> 사망하면 게임 종료, 전투에서 승리시, 레벨업

	 -> 도망가기 선택시, 10% 확률로 사망
	 -> 사망하면 게임 종료

	플레이어는 몇레벨로 던전에 탈출하였습니다.
	축하드립니다 게임을 클리어하셨습니다.
*/

/*
	수도 코드 (노트에 따로 적어서 코딩하긴 했으나, 참고용으로 간단히 적어둠)

	출력 > 플레이어 1레벨, 던전 입장, 1레벨 고블린과 조우, 싸움과 도망 중 택 1
	입력 > 1. 싸우기, 2. 도망치기
	연산 > 사망확률 - (고블린 레벨/1+플레이어 레벨*2)*100 
		   랜덤확률 - 랜덤함수 출력 % 100
		if (싸우기)
			if (랜덤확률<사망확률) - 사망
			else - 생존(승리)
		if (도망치기)
			if (랜덤확률<10) - 도망 실패
			else - 도망 성공
	
	위 내용을 원하는 횟수만큼 반복, 반복 횟수도 랜덤으로 뽑아서 돌리면 재밌을듯

	출력 > 플레이어는 n레벨로 던전에서 탈출하였습니다. 축하드립니다.
*/