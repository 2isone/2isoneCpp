#include<iostream>

using namespace std;

void main()
{
	for (int i = 0; i < 1000; i++)
	{

	}
	
	//while문을 for문으로
	bool isGamePlaying = true;
	while(isGamePlaying == true)
	{
		cout << "게임을 종료하시겠습니까? (0: 예, 그 외: 아니오.)" << endl;
		int choice;
		cin >> choice;
		if (choice == 0)
		{
			isGamePlaying = false;
		}
	}
	
	for (int i = 0; i < 1; i++)
	{
		cout << "게임을 종료하시겠습니까? (0: 예, 그 외: 아니오.)" << endl;
		int choice;
		cin >> choice;
		if (choice != 0)
		{
			i--;
		}
	}
	

	//for문을 while문으로
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}

	int num = 0;
	while (num < 10)
	{
		cout << num++ << endl;
	}

	int choice;
	do
	{
		cout << "왼손(0)과 오른손(1) 중에 선택해주세요." << endl;
		cin >> choice;
	} while (2 < choice || choice < 0);

	cout<<"왼손(0)과 오른손(1) 중에 선택해주세요." << endl;
	cin >> choice;
	while (2 < choice || choice < 0)
	{
		cout << "잘못 선택하셨습니다. 다시 골라주세요." << endl;
		cin >> choice;
	}
	
}

/*
	반복문 3가지 - for, while, do-while
	반복하기 위해 만들어진 문법

	for문은 주로 i=0, i++이 고정,
	가운데 조건문만 보고 몇 번 실행하는지 판단하는 경우 다수
	반복 횟수가 정해져있으므로 길이가 정해져 있는 배열과 같이 쓰기 좋음

	while문
	while(조건식)
	{
		실행구문
	}
	조건식이 참이면 실행 구문을 실행, 반복
	조건식이 거짓이면 반복 탈출
	한글로 해석했을 때, ~하는 동안 의 느낌이면 while 사용

	for문 > n번 반복
	while문 > ~하는 동안 반복

	진짜 자주 안 쓰이는 반복문
	do while문
	do
	{
		실행구문
	}while(조건식);

	while문과의 차이점 > 무조건 1번은 실행 (조건식이 일치하든 안 하든 상관없이)
	종종 콘솔에서는 유의미하게 사용됨
	그치만 정말 안 쓰이므로... for문과 while문만 잘 사용할 줄 알아도 코딩하는데 지장없음
*/