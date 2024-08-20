#include<iostream>

using namespace std;

void main()
{
	int lotto[45] = {};

	srand(time(NULL));
	
	for (int i = 0; i < 45; i++)
	{
		lotto[i] = i + 1;
	}

	for (int i = 0; i < 100000; i++)
	{
		int index1 = rand() % 45;
		int index2 = rand() % 45;

		int temp = lotto[index1];
		lotto[index1] = lotto[index2];
		lotto[index2] = temp;
	}

	cout << "금주의 당첨 번호는 ";

	for (int i = 0; i < 6; i++)
	{
		cout << lotto[i] << " ";
	}

	cout << "+ 보너스 번호 " << lotto[6] << " 입니다.";
}

/*
	1. 로또 번호 생성기 - 강사님이 주신 힌트를 참고해 작성함
	힌트: 로또 통 lotto[45] 배열을 선언, 안에서 스왑한 다음 7개를 뽑아주면 됨.
	
	수도코드
	선언 lotto[45]
	for문 lotto 배열에 1부터 45까지 숫자 집어넣기
	for문 lotto 배열 내부 스왑
	for문 로또 번호 출력 (otto[0]부터 lotto[6]까지 6개 출력,
	내부에서 스왑했으니 출력하는 배열 번호는 고정되도 매번 값이 바뀜)
	for문 cout 로또 번호
	cout 보너스 번호

	+ 스왑 후 한번 더 랜덤으로 뽑는 것도 가능할 것 같긴 한데,
	그럴거면 처음부터 숫자 자체를 랜덤으로 뽑지 굳이 스왑할 이유가 없는듯?
	일 두 번 하는 느낌이라 굳이? 라고 생각했음
	스왑 없이 아예 숫자 자체를 랜덤으로 뽑는 걸로 homework1-1 작성함
*/