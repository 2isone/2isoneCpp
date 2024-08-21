#include<iostream>

using namespace std;

void main()
{
	int arr[1000] = { };

	for (int i = 0; i < 1000; i++)
	{
		if (i % 3 == 0)
		{
			arr[i] = 1000 + i;
		}
		else
		{
			arr[i] = i;
		}
	}

	//arr의 배열에서 3의 배수만 출력하고 싶다.
	for (int i = 0; i < 1000; i++)
	{
		if (arr[i] % 3 == 0)
		{
			cout << "arr[" << i << "] = " << arr[i] << endl;
		}
	}

	for (int i = 0; i < 1000; i++)
	{
		if (arr[i] % 3 != 0)
		{
			continue; //반복문 로직 안에서 유효성 체크할 때 많이 쓰임
		}

		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
	
	bool isEnd = false;
	while (isEnd == false)
	{
		for (int i = 0; i < 1000; i++)
		{
			if (i == 500)
			{
				isEnd = true;
				break;
			}
			cout << i << endl;
		}
	}

	//모든 몬스터 조회
	for (int i = 0; i < 1000; i++)
	{
		if (monsterArr[i].hp <= 0)
		{
			continue;
		}

		monsterArr[i].ActionAI();
	}

}

/*
	continue; break;
	반복문을 좀 더 윤택하게 사용하기 위해 나온 문법
	continue; > 이번 분기를 skip 하고 계속 진행
	break; > 반복문 종료

	오늘부터 배우는 문법들은 꼭 활용할 필요는 없음
	활용하면 좋은 부분은 따로 설명해주실 예정

	break; > 반복문 탈출
*/