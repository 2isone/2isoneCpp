#include<iostream>

using namespace std;

void main()
{
	int playerLeftHand;
	int playerRightHand;

	int arr[10] = {};

	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 10;

	cout << "arr[0] = " << arr[0] << endl;

	int a = 100;
	int b = 30;

	int c = 0;

	cout << a << endl << b << endl;

	c = a;
	a = b;
	b = c;

	cout << a << endl << b << endl;


}

/*
	[배열]
	배열이란? 
	변수를 한번에 선언해주는 기능
	ex. 가위바위보 하나 빼기를 만들었다고 가정, 가위바위보랑 다르게 한번에 내야 하는 내용이 두 개
	왼손, 오른손 따로 선언하게 됨
	근데 만약 5개 중에 하나를 선택한다고 하면? 10개 중에 하나를 택한다면?
	변수를 하나하나 만들어 적용하기에는 수정할 경우, 수정할 코드가 굉장히 많아짐
	이런 경우 변수를 일일히 만들어 사용하는 것보다 배열을 사용하는 것이 효율적임

	자료형 변수명[길이] = {};
	int arr[10] = {}; < 변수 내의 값은 모두 0으로 초기화

	많이 사용 하는 알고리즘 - 알고리즘은 어차피 외워서 쓰게 됨, 외웁시다...
	1. Swap 알고리즘

	int a = 40;
	int b = 85;

	int temp;
	temp = a;
	a = b;
	b = temp;

	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

*/