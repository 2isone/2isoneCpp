#include<iostream>

using namespace std;

#define NUMBER_SIZE 4

int comNum[NUMBER_SIZE] = {};
int userNum[NUMBER_SIZE] = {};
bool userNumCheck = false;
int strike = 0;
int ball = 0;

void PrintComNum();
void PrintUserNum();

void ChoiceComNum();
void ChoiceUserNum();
void CheckUserNum();
void CompareNum();
void ResetValue();


void main()
{
	srand(time(NULL));
	ChoiceComNum();

	cout << "숫자 야구를 시작합니다." << endl;

	for (int i = 0; i < 9; i++)
	{
		while (userNumCheck == false)
		{
			ChoiceUserNum();
			CheckUserNum();
		}

		CompareNum();
		cout << ball << " ball " << strike << " strike" << endl;

		if (strike == NUMBER_SIZE)
		{
			cout << "게임에서 승리했습니다." << endl;
			break;
		}

		ResetValue();
	}
}

//확인용 함수
void PrintComNum()
{
	for (int i = 0; i < NUMBER_SIZE; i++)
	{
		cout << comNum[i];
	}

	cout << endl;
}

void PrintUserNum()
{
	for (int i = 0; i < NUMBER_SIZE; i++)
	{
		cout << userNum[i];
	}

	cout << endl;
}

//숫자야구 함수
void ChoiceComNum()
{
	int arr[10] = {};
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}

	for (int i = 0; i < 100000; i++)
	{
		int index1 = rand() % 10;
		int index2 = rand() % 10;

		int temp = arr[index1];
		arr[index1] = arr[index2];
		arr[index2] = temp;
	}

	if (arr[0] == 0)
	{
		for (int i = 0; i < NUMBER_SIZE; i++)
		{
			comNum[i] = arr[i + 1];
		}
	}
	else
	{
		for (int i = 0; i < NUMBER_SIZE; i++)
		{
			comNum[i] = arr[i];
		}
	}


}

void ChoiceUserNum() //피드백 반영, NUMBER_SIZE가 변하는 경우에도 대응되도록 수정, 풀이영상 참고함
{
	int inputNum;
	cout << NUMBER_SIZE << "자리 숫자를 입력해주십시오." << endl;
	cin >> inputNum;

	for (int i = 0; i < NUMBER_SIZE; i++)
	{
		int length = NUMBER_SIZE - 1 - i;
		int divNumber = 1;
		for (int j = 0; j < length; j++)
		{
			divNumber *= 10;
		}
		userNum[i] = inputNum / divNumber % 10;
	}
}

void CheckUserNum()
{
	userNumCheck = true;

	for (int i = 0; i < NUMBER_SIZE; i++)
	{
		int checkNum1 = userNum[i];
		for (int j = i + 1; j < NUMBER_SIZE; j++)
		{
			if (userNum[i] == userNum[j])
			{
				userNumCheck = false;
			}
		}
	}

	if (userNum[0] == 0)
	{
		userNumCheck == false;
	}

}

void CompareNum()
{
	for (int i = 0; i < NUMBER_SIZE; i++)
	{
		if (comNum[i] == userNum[i])
		{
			strike++;
		}

		for (int j = 0; j < NUMBER_SIZE; j++)
		{
			if (i == j)
			{
				continue;
			}
			if (comNum[i] == userNum[j])
			{
				ball++;
			}
		}
	}
}

void ResetValue()
{
	for (int i = 0; i < NUMBER_SIZE; i++)
	{
		userNum[i] = 0;
	}

	userNumCheck = false;
	ball = 0;
	strike = 0;
}



/*
	1. 숫자 야구 만들기

	숫자야구 룰
	(3자리가 수월하면 4자리 숫자로 진행)
	컴퓨터가 랜덤으로 겹치지 않는 3자리 숫자를 고른다. (이때 첫번째 자리는 무조건 1이상이ㄴ어야함)
	ex. 777(x), 789(o), 154(o), 155(x), 014(x), 104(o)

	플레이어는 1회, 2회, 3회 ... 9회까지 게임을 플레이한다.
	플레이어는 회마다 겹치지 않는 숫자를 부른다. (이때 첫번째 자리는 무조건 1이상이어야함)
	ex. 777(x), 789(o), 154(o), 155(x), 014(x), 104(o)

	자릿수와 숫자가 모두 일치하면 strike
	숫자는일치하지만 자릿수가 일치하지 않으면 ball
	을 카운트하여 현황판을 출력한다

	ex. 컴퓨터가 고른숫자 : 154
	ex. 플레이어가 부른숫자 : 149
	==> 1strike 1ball

	ex. 컴퓨터가 고른숫자 : 154
	ex. 플레이어가 부른숫자 : 501
	==> 0strike 2ball

	승리조건 : 숫자를 맞추면 승리


*/