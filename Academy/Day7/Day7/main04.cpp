﻿#include<iostream>

using namespace std;

void main()
{
	int a = 3;

	cout << "a의 주소값 : " << &a << endl;
	cout << "a의 값 : " << a << endl;
	cout << "a의 주소값에 위치한 값 : " << (*(&a)) << endl;

	int* ptr = nullptr;
	float f = 10.4;
	ptr = &a;

	cout << "ptr의 값은 : " << ptr << endl;
	cout << "ptr의 주소값 : " << &ptr << endl;
	cout << "ptr의 *값 : " << *ptr << endl;
	
	int arr[3] = { 2,3,4 };
	cout << "arr의 값 : " << arr << endl;

	int* ptr2 = arr;
	cout << "ptr2 의 값 : " << ptr2 << endl;
	cout << "*ptr2 : " << *ptr2 << endl;
	cout << "*(ptr2 + 1) : " << *(ptr2 + 1) << endl;
	cout << "*(ptr2 + 2) : " << *(ptr2 + 2) << endl;
}

/*
	프로그래밍 포기하게 되는 2단계
	1. 포인터
	2. 클래스

	포인터란 무엇인가?
	컴퓨터 사이언스, 백그라운드를 알아야 이해가 쉬움
	포인터: 변수의 메모리 주소
	
	똑같은 정수형이라도 1, 2, 4, 8바이트 정수가 따로 존재
	RAM이라는 공간에 변수들이 저장됨, 언제까지? 변수가 사라질 때까지

	a의 주소는 H3에 저장되어 있고
	값은 3으로 4byte 영역에 걸쳐 저장되어 있다
	a의 주소 값 : H3
	a의 값 : 3
	a의 주소 값에 위치한 값: 3

	& 연산자: 주소 값을 가져옴
	* 연산자: 뒤에 온 값을 주소 값으로 인지했을때의 실제 값
	
	포인터 자료형
	주소를 들고 있는 자료형
	포인터 자료형에는 메모리 주소 값을 넣을 수 있음
	포인터 자료형 b = nullptr;
	b = &a;
	b에는 a의 주소 값을 넣겠다
	b의 값은: H3(a의 주소 값)
	b의 주소 값: D9
	*b: 3(a의 값)

	포인터 자료형의 생김새?
	int* <이게 포인터
	int가 붙은 이유는?
	주소 값을 알려주는 역할 > *
	앞에 int가 붙은 건 저 포인터가 저장할 위치에 있는 주소들이 int형 변수의 주소라는 의미

	int* ptr < int형 변수의 주소만 기억할 수 있음

	ptr의 값: H3(a의 주소 값)
	ptr의 주소값: D9
	*ptr의 값: 3(a의 값)

	포인터와 배열은 매우 비슷함 (갑자기?)

	arr은 배열의 가장 첫번째에 위치한 주소값을 들고 있는 것
	우리가 [0], [1]을 통해 그 위치의 값을 들고 오는 것
*/