#include<iostream>

#define BOARD_SIZE 5

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

		if (playerBingoCount == 3)
		{
			cout << "플레이어 3빙고, 게임에서 승리하셨습니다." << endl;
			break;
		}
		else if (comBingoCount == 3)
		{
			cout << "컴퓨터 3빙고, 게임에서 패배하셨습니다." << endl;
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

void CheckBingo()
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
		if (playerBingoBoard[0][0] == 0 &&
			playerBingoBoard[1][1] == 0 &&
			playerBingoBoard[2][2] == 0 &&
			playerBingoBoard[3][3] == 0 &&
			playerBingoBoard[4][4] == 0)
		{
			playerBingoCount++;
		}

		if (playerBingoBoard[0][4] == 0 &&
			playerBingoBoard[1][3] == 0 &&
			playerBingoBoard[2][2] == 0 &&
			playerBingoBoard[3][1] == 0 &&
			playerBingoBoard[4][0] == 0)
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
		if (comBingoBoard[0][0] == 0 &&
			comBingoBoard[1][1] == 0 &&
			comBingoBoard[2][2] == 0 &&
			comBingoBoard[3][3] == 0 &&
			comBingoBoard[4][4] == 0)
		{
			comBingoCount++;
		}

		if (comBingoBoard[0][4] == 0 &&
			comBingoBoard[1][3] == 0 &&
			comBingoBoard[2][2] == 0 &&
			comBingoBoard[3][1] == 0 &&
			comBingoBoard[4][0] == 0)
		{
			comBingoCount++;
		}
	}
	//대각선 빙고 if문 말고 for문으로도 할 수 있을 것 같은데,
	//미묘하게 원하는 거랑 다르게 작동해서 어떻게 구현해야 할 지 모르겠음...
	//될 거 같은데, 왜 안 되는 걸까 ㅇ<<

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