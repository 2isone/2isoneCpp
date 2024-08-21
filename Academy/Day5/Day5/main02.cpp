#include <iostream>

using namespace std;
int lotto[45] = {};

void InitializeLotto()
{
	for (int i = 0; i < 45; i++)
	{
		lotto[i] = i + 1;
	}
}

void ShffleLotto()
{
	for (int i = 0; i < 100000; i++)
	{
		int index1 = rand() % 45;
		int index2 = rand() % 45;

		int temp = lotto[index1];
		lotto[index1] = lotto[index2];
		lotto[index2] = temp;
	}
}

void PrintLotto()
{
	cout << "로또번호 : ";
	for (int i = 0; i < 7; i++)
	{
		cout << lotto[i] << " ";
	}
	cout << endl;
}
void main()
{
	srand(time(NULL));
	InitializeLotto();
	ShffleLotto();
	PrintLotto();
}

/*
	로또 번호 뽑기
	수도코드 작성
	int lotto[45] 1 ~ 45
	lotto 값을 1~45까지 초기화
	lotto 배열을 섞어준다
		for( 100000 )
			index1을 0~44까지 랜덤으로 뽑는다.
			index2를 0~44까지 랜덤으로 뽑는다
			lotto[index1] <-> lotto[index2]를 swap한다.
	앞에서부터 7개를 출력

	턴제 전투 수도코드
	- 플레이어 행동을 결정한다
	- 결정된 행동에따라 플레이어가 행동한다
	- 상대턴으로 넘어간다.

	초기화가 잘되었는지 확인하는방법
	1. 로그 찍어보기
	2. 디버깅
	for (int i = 0; i < 45; i++)
	{
		cout << "lotto[" << i << "] = " << lotto[i] << endl;
	}
*/