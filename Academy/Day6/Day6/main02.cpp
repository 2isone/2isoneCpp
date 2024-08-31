#include<iostream>

using namespace std;

//매크로
#define NUMBER_SIZE 3
//#define DEV_MODE

int computerNumber[NUMBER_SIZE] = {};
int userNumber[NUMBER_SIZE] = {};
bool isUserNumberComplete = false;
int strike = 0;
int ball = 0;

// 함수전방선언
void ChooseComputerNumber();
void ChooseUserNumber();
void CheckValidationUserNumber();
void CompareNumbers();
void PrintStrikeBallCount();
void InitUserVariable();

void main()
{
	srand(time(NULL));
	ChooseComputerNumber();
	for (int i = 0; i < 9; i++)
	{
		while (isUserNumberComplete == false)
		{
			ChooseUserNumber();
			CheckValidationUserNumber();
		}
		CompareNumbers();
		PrintStrikeBallCount();

		if (strike == NUMBER_SIZE)
		{
			break;
		}

		InitUserVariable();
	}
}

void ChooseComputerNumber()
{
	int arr[10] = {};
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}

	for (int i = 0; i < 10000; i++)
	{
		int index1 = rand() % 10;
		int index2 = rand() % 10;

		int temp = arr[index1];
		arr[index1] = arr[index2];
		arr[index2] = temp;
	}

	if (arr[0] == 0)
	{
		//천의 자릿수 arr[9]
		//백의 자릿수 arr[8]
		//십의 자릿수 arr[7] 
		//일의 자릿수 arr[6]
		for (int i = 0; i < NUMBER_SIZE; i++)
		{
			computerNumber[i] = arr[9 - i];
		}
	}
	else
	{
		//천의 자릿수 arr[0]
		//백의 자릿수 arr[1]
		//십의 자릿수 arr[2] 
		//일의 자릿수 arr[3]
		for (int i = 0; i < NUMBER_SIZE; i++)
		{
			computerNumber[i] = arr[i];
		}
	}

#ifdef DEV_MODE
	cout << "[디버깅용] 입력한 computerNumber : ";
	for (int i = 0; i < NUMBER_SIZE; i++)
	{
		cout << computerNumber[i];
	}
	cout << endl;
#endif
}

void ChooseUserNumber()
{
	int tempNumber;
	cout << "부를 숫자를 입력해주세요 : ";

	//사용성이 너무 떨어짐.
	//cin >> userNubmer[0];
	//cin >> userNubmer[1];
	//cin >> userNubmer[2];
	//cin >> userNubmer[3];

	cin >> tempNumber;
	// 1234 / 1000 => 1
	// 1234 / 100 => 12 % 10 => 2
	//userNumber[0] = tempNumber / 1000 % 10;
	//userNumber[1] = tempNumber / 100 % 10;
	//userNumber[2] = tempNumber / 10 % 10;
	//userNumber[3] = tempNumber / 1 % 10;

	for (int i = 0; i < NUMBER_SIZE; i++)
	{
		int length = NUMBER_SIZE - 1 - i;
		int divNumber = 1;
		for (int j = 0; j < length; j++)
		{
			divNumber *= 10;
		}
		userNumber[i] = tempNumber / divNumber % 10;
	}


#ifdef DEV_MODE
	cout << "[디버깅용] 입력한 userNumber : ";
	for (int i = 0; i < NUMBER_SIZE; i++)
	{
		cout << userNumber[i];
	}
	cout << endl;
#endif

}
void CheckValidationUserNumber()
{
	//유저가 입력한게 어래 조건을 충족하면 
	// isUserNumberComplete = true로 바꿔주고
	//그렇지 않으면 isUserNumberComplete = false로 설정한다.
	// 
	// [조건]
	// 겹치지 않는 숫자를 부른다. (이때 첫번째 자리는 무조건 1이상이어야함)
	// ex. 1777(x), 1789(o), 2154(o), 2155(x), 0124(x), 1204(o)
	//

	// 1. 각자릿수별로 for문을 돈다.
	// 2. 각 자리에서 그 다음자릿수들을 for문을 또 돈다.

	//userNumber[0] ~ userNumber[4]
	isUserNumberComplete = true;
	for (int i = 0; i < NUMBER_SIZE; i++)
	{
		int checkNumber1 = userNumber[i];
		for (int j = i + 1; j < NUMBER_SIZE; j++)
		{
			int checkNumber2 = userNumber[j];

			if (checkNumber1 == checkNumber2)
			{
				isUserNumberComplete = false;
			}
		}
	}


	//첫번째 자릿수는 0이면 안됨.
	if (userNumber[0] == 0)
	{
		isUserNumberComplete = false;
	}

	// userNumber[0], userNumber[1]
	// userNumber[0], userNumber[2]
	// userNumber[0], userNumber[3]

	// userNumber[1], userNumber[2]
	// userNumber[1], userNumber[3]

	// userNumber[2], userNumber[3]
}

void CompareNumbers()
{
	// 5. 외친숫자와 컴퓨터가 정한 숫자를 비교하여 Ball, Strike를 센다.
	//수도코드
	// computerNumber를 순회하고 => 이변수를 currentComputerNumber
	// userNumber를 순회한다. => 이변수를 currentUserNumber
	// 만약 currentComputerNumber == currentUserNumber 이면
	//		만약 computerNumber를 순회한 인덱스 == userNumber를 순회한 인덱스와 같다면
	//			strike++;
	//		그렇지 않으면
	//			ball++;

	for (int i = 0; i < NUMBER_SIZE; i++)
	{
		int currentComputerNumber = computerNumber[i];
		for (int j = 0; j < NUMBER_SIZE; j++)
		{
			int currentUserNumber = userNumber[j];

			if (currentComputerNumber == currentUserNumber)
			{
				if (i == j)
				{
					strike++;
				}
				else
				{
					ball++;
				}
			}
		}
	}

}

void PrintStrikeBallCount()
{
	cout << strike << "스트라이크, " << ball << "볼!" << endl;
}


void InitUserVariable()
{
	for (int i = 0; i < NUMBER_SIZE; i++)
	{
		userNumber[i] = 0;
	}

	isUserNumberComplete = false;
	strike = 0;
	ball = 0;
}


/*
	1. 숙제 풀이 - 숫자 야구

	수도 코드 (4자리)
	
	1. 컴퓨터가 랜덤 숫자를 뽑는다. (4자리)
	2. 유저가 랜덤 숫자를 외친다.
	3. 그 외친 숫자가 올바른 숫자인지 판단한다.
	4. 올바른 숫자라면 5번으로, 올바르지 않은 숫자라면 2번으로 간다.
	5. 외친 숫자와 컴퓨터가 정한 숫자를 비교하여, strike, ball을 체크한다.
	6. strike, ball을 출력한다.
	-7. 2~6번을 9번 반복한다, 혹시 그 안에 정답을 입력하면 게임을 종료한다.

	간단한 룰 형태를 함수로 바꾸면
	1. ChooseComputerNumber();
	2. ChooseUserNumber();
	3. CheckValidationUserNumber();
	4. CompareNumbers();
	5. PrintStrikeBallCount();
	6. InitUserVariable();

	
	이름 바꾸기 단축키 ctrl + r + r
*/