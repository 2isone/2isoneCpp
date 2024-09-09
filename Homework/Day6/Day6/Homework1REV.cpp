#include<iostream>
#include<Windows.h>

#define BOARD_SIZE 7

using namespace std;

int playerBingoBoard[BOARD_SIZE][BOARD_SIZE] = {};
int comBingoBoard[BOARD_SIZE][BOARD_SIZE] = {};
int callNumber = 0;
int playerBingoCount = 0;
int comBingoCount = 0;
bool gamestoping = false;

void ShuffleBoard();
void PlayerBingoNum();
void ComBingoNum();
void CheckBingo();
void PrintBoard();

void main()
{
	srand(time(NULL));

	cout << "빙고 게임을 시작합니다." << endl;
	ShuffleBoard();
	PrintBoard();

	while (gamestoping == false)
	{
		PlayerBingoNum();
		PrintBoard();

		ComBingoNum();
		PrintBoard();

		CheckBingo();

		if (3 <= playerBingoCount) //한 번에 여러개의 빙고가 생겨 빙고의 수가 3을 초과했을 때, 종료되지 않는 부분 수정
		{
			cout << "플레이어 " << playerBingoCount << "빙고, 게임에서 승리하셨습니다." << endl;
			break;
		}
		else if (3 <= comBingoCount)
		{
			cout << "컴퓨터 " << comBingoCount << "빙고, 게임에서 승리하셨습니다." << endl;
			break;
		}

	}

}

void ShuffleBoard()
{
	cout << "나와 컴퓨터의 빙고판을 섞습니다." << endl;

	int inputNum = 1;

	for (int i = 0; i < BOARD_SIZE; i++)
	{
		for (int j = 0; j < BOARD_SIZE; j++)
		{
			playerBingoBoard[i][j] = inputNum;
			comBingoBoard[i][j] = inputNum++;
		}
	}

	for (int i = 0; i < 100000; i++)
	{
		int index1 = rand() % BOARD_SIZE;
		int index2 = rand() % BOARD_SIZE;
		int index3 = rand() % BOARD_SIZE;
		int index4 = rand() % BOARD_SIZE;

		int temp = playerBingoBoard[index1][index2];
		playerBingoBoard[index1][index2] = playerBingoBoard[index3][index4];
		playerBingoBoard[index3][index4] = temp;
	}

	for (int i = 0; i < 100000; i++)
	{
		int index1 = rand() % BOARD_SIZE;
		int index2 = rand() % BOARD_SIZE;
		int index3 = rand() % BOARD_SIZE;
		int index4 = rand() % BOARD_SIZE;

		int temp = comBingoBoard[index1][index2];
		comBingoBoard[index1][index2] = comBingoBoard[index3][index4];
		comBingoBoard[index3][index4] = temp;
	}
}

void PlayerBingoNum()
{
	int playerNum = 0;
	bool correctInputNum = false;

	while (correctInputNum == false)
	{
		cout << "원하는 숫자를 입력해주십시오." << endl;
		cin >> playerNum;

		for (int i = 0; i < BOARD_SIZE; i++)
		{
			for (int j = 0; j < BOARD_SIZE; j++)
			{
				if (playerNum == playerBingoBoard[i][j])
				{
					correctInputNum = true;
					playerBingoBoard[i][j] = 0;
				}
				if (playerNum == comBingoBoard[i][j])
				{
					comBingoBoard[i][j] = 0;
				}
			}
		}

		if (correctInputNum == false)
		{
			cout << "빙고판에 없는 숫자를 입력하셨습니다." << endl;
		}
	}
}

void ComBingoNum()
{
	int comNum = 0;
	bool correctComNum = false;

	while (correctComNum == false)
	{
		comNum = rand() % 25 + 1;
		for (int i = 0; i < BOARD_SIZE; i++)
		{
			for (int j = 0; j < BOARD_SIZE; j++)
			{
				if (comNum == comBingoBoard[i][j])
				{
					correctComNum = true;
					comBingoBoard[i][j] = 0;
				}
				if (comNum == playerBingoBoard[i][j])
				{
					playerBingoBoard[i][j] = 0;
				}
			}
		}
	}
	cout << "컴퓨터가 선택한 숫자는 " << comNum << "입니다." << endl;
}

void CheckBingo() // BOARD_SIZE에 대응할 수 있게 대각선 빙고 코드 수정
{
	playerBingoCount = 0;
	comBingoCount = 0;

	//플레이어
	//가로 빙고
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		bool makingBingo = true;

		for (int j = 0; j < BOARD_SIZE; j++)
		{
			if (playerBingoBoard[i][j] != 0)
			{
				makingBingo = false;
			}
		}

		if (makingBingo)
		{
			playerBingoCount++;
		}
	}

	//세로 빙고
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		bool makingBingo = true;

		for (int j = 0; j < BOARD_SIZE; j++)
		{
			if (playerBingoBoard[j][i] != 0)
			{
				makingBingo = false;
			}
		}

		if (makingBingo)
		{
			playerBingoCount++;
		}
	}

	//대각선 빙고
	{
		int bingoCheck1 = 0;
		int bingoCheck2 = 0;

		for (int i = 0; i < BOARD_SIZE; i++)
		{
			if (playerBingoBoard[i][i] == 0)
			{
				bingoCheck1++;
			}
		}

		for (int i = 0; i < BOARD_SIZE; i++)
		{
			int j = BOARD_SIZE - 1 - i;
			if (playerBingoBoard[i][j] == 0)
			{
				bingoCheck2++;
			}
		}
		
		if (bingoCheck1 == BOARD_SIZE)
		{
			playerBingoCount++;
		}
		if (bingoCheck2 == BOARD_SIZE)
		{
			playerBingoCount++;
		}
	}

	//컴퓨터
	//가로 빙고
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		bool makingBingo = true;

		for (int j = 0; j < BOARD_SIZE; j++)
		{
			if (comBingoBoard[i][j] != 0)
			{
				makingBingo = false;
			}
		}

		if (makingBingo)
		{
			comBingoCount++;
		}
	}

	//세로 빙고
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		bool makingBingo = true;

		for (int j = 0; j < BOARD_SIZE; j++)
		{
			if (comBingoBoard[j][i] != 0)
			{
				makingBingo = false;
			}
		}

		if (makingBingo)
		{
			comBingoCount++;
		}
	}

	//대각선 빙고
	{
		int bingoCheck1 = 0;
		int bingoCheck2 = 0;

		for (int i = 0; i < BOARD_SIZE; i++)
		{
			if (comBingoBoard[i][i] == 0)
			{
				bingoCheck1++;
			}
		}

		for (int i = 0; i < BOARD_SIZE; i++)
		{
			int j = BOARD_SIZE - 1 - i;
			if (comBingoBoard[i][j] == 0)
			{
				bingoCheck2++;
			}
		}

		if (bingoCheck1 == BOARD_SIZE)
		{
			comBingoCount++;
		}
		if (bingoCheck2 == BOARD_SIZE)
		{
			comBingoCount++;
		}
	}

	cout << "플레이어 빙고 수: " << playerBingoCount << endl;
	cout << "컴퓨터 빙고 수: " << comBingoCount << endl;
}

void PrintBoard()
{
	cout << "내 빙고판:" << endl;
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		for (int j = 0; j < BOARD_SIZE; j++)
		{
			cout << playerBingoBoard[i][j] << "\t";
		}
		cout << endl;
	}

	cout << "컴퓨터 빙고판:" << endl;
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		for (int j = 0; j < BOARD_SIZE; j++)
		{
			cout << comBingoBoard[i][j] << "\t";
		}
		cout << endl;
	}
}


/*
	숙제 - 다차원 배열을 써도 되고, 안 써도 됨, 자율

	1. 내 빙고판과 컴퓨터 빙고판이 존재한다.
	2. 둘 다 1~25의 숫자가 적혀있다.
	3. 빙고판은 랜덤으로 섞여있다.
	4. 나와 컴퓨터가 돌아가면서 숫자를 외친다.
	5. 둘 다 그 숫자를 빙고판에서 X 표시한다.
	6. 둘 중 한명이라도 빙고를 완성하면 게임 종료. (3줄 빙고, 가로, 세로, 대각선 모두 가능)
*/