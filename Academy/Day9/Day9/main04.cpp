#include<iostream>

using namespace std;

struct Monster
{
private: //나만 접근 가능
public: //모두가 접근 가능
	int Hp;
	int Attack;
};

class CMonster
{
	int Hp;
	int Attack;
};



void main()
{

}

/*
	클래스 - 1
	클래스가 무엇이냐?
	클래스는 구조체와 98% 동일함 (최소한 C++에서는)

	접근 제어자가 기본적으로
	구조체는 public, 클래스는 private
	클래스를 public 으로 변경하면 구조체와 100% 동일해짐

	최초의 설계자는 구조체와 클래슬르 각각 뭘로 생각했기에
	기본 접근 제어가 구조체는 public이고, 클래스는 private일까? 를 분기별로 고민해보는 게 좋음
	왜냐? C언어는 절차지향 프로그래밍, C++은 객체지향 프로그래밍

	절차지향 프로그래밍
	- 코드는 위에서부터 아래로 흐른다. (사실 모든 언어가 이렇긴 함)
	- 모듈화라는 개념이 없음 (= 객체라는 개념이 없음)

	객체지향 프로그래밍
	- Monster, Player, Camera, GameRule 등의 객체를 만들어서
	객체들끼리 알아서 상호작용하는 코드를 짜는 방식을 객체지향 프로그래밍
	- 이상향임... (거의 불가능함)
	- 클래스를 많이 써서 코드를 분할하자, 정도로 정리 (C언어는 너무 파일 하나에 몰아져있다)

*/