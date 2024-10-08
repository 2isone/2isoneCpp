﻿#include<iostream>

using namespace std;

void main()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "i : " << i << endl;
	}
}

/*
	반복문
	배열과 반복문은 떼어놓고 생각할 수 없고, 반복문이 본체.

	반복문?
	같은 내용을 반복해서 동작시킬 때, 유용하게 쓰이는 문법

	for (int i = 0; i < 10; i++ ) { }
	for (선언식; 조건식; 증감문) { 실행 구문 }

	선언식 
	int i = 0; : 이 반복문을 사용할 때, int i = 0 이라는 변수를 선언해서 사용할 것
	for문이 시작할 때 단 한번 실행

	조건식
	i < 10 : 조건식이 true면 실행 구문을 실행
	지정된 횟수만큼 반복해서 실행

	증감식
	실행 구문을 완료한 후, 실행시킬 간단한 증감식을 넣을 수 있는 구간, 안 적어도 무방

	for문 작동 방식은 이해하고 있으므로 생략.
*/