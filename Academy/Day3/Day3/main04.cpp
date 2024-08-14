#include<iostream>

using namespace std;

int main()
{
	int inputNumber = 0;

	cout << "숫자를 입력해주세요\n";
	cin >> inputNumber;

	if (inputNumber % 2 == 0)
	{
		cout << "[" << inputNumber << "]" << "는 짝수입니다." << endl;
	}
	else
	{
		cout << "[" << inputNumber << "]" << "는 홀수입니다." << endl;
	}

}

/*
	C++에서의 새로운 문법
	C에서의 출력과 입력은 printf, scanf_s
	C++에서의 출력과 입력은 cout (c out) cin (c in) endl (end line) 등이 추가
	그치만 %d, %f, %c 등의 내용은 C++ 하려면 어차피 알아야 함.
*/