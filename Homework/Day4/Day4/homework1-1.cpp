#include<iostream>

using namespace std;

void main()
{
	int lotto[7] = {};

	srand(time(NULL));

	for (int i = 0; i < 7; i++)
	{
		lotto[i] = rand() % 45 + 1;

		for (int j = 0; j < i; j++)
		{
			if (lotto[i] == lotto[j])
			{
				i--;
			}
		}
	}

	cout << "금주의 당첨 번호는 ";

	for (int i = 0; i < 6; i++)
	{
		cout << lotto[i] << " ";
	}

	cout << "+ 보너스 번호 " << lotto[6] << " 입니다.";

}

/*
	1. 로또 번호 생성기 - 이렇게 하는 게 더 효율적이지 않을까? 싶어서 하나 더 작성해봄
	(45개를 스왑하는 것보다 그냥 7개만 랜덤으로 뽑아버리는 게 좋지 않을까 라는 생각에서)

	수도코드

	선언 lotto[7]
	랜덤함수 값 지정 srand
	for문 i=0 i<7 i++, lotto[i]에 랜덤값 넣기
		중복값 들어가면 안 되니까
		for문 i=j i<i j++, if문 lotto i랑 lotto j랑 같으면
							랜덤값 다시 넣기 (이전 for문 다시 실행) > i--
	cout 금주의 로또 번호는
	for문 i=0 i<6 i++, lotto 0부터 5까지 출력
	cout + 보너스 번호 lotto 6 입니다.
*/