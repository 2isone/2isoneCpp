﻿#include<iostream>

using namespace std;

void main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int arr2[2][5] = { {1,2,3,4,5},{6,7,8,9,10} };

	for (int i = 0; i < 10; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "arr2[" << i << "][" << j << "] = " << arr2[i][j] << endl;
		}
	}


	int bingo[25] = {};
	int bingo2[5][5] = {};
	
	for (int i = 0; i < 25; i++)
	{
		bingo[i] = i + 1;
		bingo2[i / 5][i % 5] = i + 1;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << bingo[i * 5 + j] << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << bingo2[i][j] << "\t";
		}
		cout << endl;
	}

}

/*
	다차원 배열
	3차원 배열도 가능, 근데 잘 쓰진 않음

	\t > tab, 일정 간격을 두고 출력
	
	
	숙제 - 다차원 배열을 써도 되고, 안 써도 됨, 자율

	1. 내 빙고판과 컴퓨터 빙고판이 존재한다.
	2. 둘 다 1~25의 숫자가 적혀있다.
	3. 빙고판은 랜덤으로 섞여있다.
	4. 나와 컴퓨터가 돌아가면서 숫자를 외친다.
	5. 둘 다 그 숫자를 빙고판에서 X 표시한다.
	6. 둘 중 한명이라도 빙고를 완성하면 게임 종료. (3줄 빙고, 가로, 세로, 대각선 모두 가능)

	
	숙제 - 하이로우세븐, 카드게임 (할 수 있는 사람만)
	
	1. 트럼프 카드 52장으로 시작, 스페이드 A부터 하트 K까지 존재
	2. 카드를 섞고 플레이어가 입장함, 플레이어는 시작 골드 10000원으로 시작
	3. 플레이어는 베팅을 함, 다음 카드가 n보다 작은지, 큰지, 같은지 베팅
	4. n보다 작은지, 큰지를 맞추면 2배, n과 같은지를 맞추면 10배 지급
	5. 트럼프 카드를 뽑고 섞고 뽑고 섞는 게 아니라 카드를 다 쓸 때까지 계속 뽑음
	6. 카드를 다 쓰거나 플레이어의 골드가 0원이 되면 게임 종료

*/