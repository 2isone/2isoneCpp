#include <iostream>

using namespace std;

//1. 구조체 정의
struct Monster
{
	float hp;
	float attack;

	void PrintInfo(Monster otherMonster)
	{
		cout << "몬스터 HP : " << this->hp << endl;
		cout << "몬스터 ATK : " << this->attack << endl;

		cout << "다른 몬스터 HP : " << otherMonster.hp << endl;
		cout << "다른 몬스터 ATK : " << otherMonster.attack << endl;
	}
};

void main()
{
	//2. 구조체 초기화
	Monster monster = { };
	monster.hp = 10;
	monster.attack = 20;

	Monster monster2 = { };
	monster2.hp = 30;
	monster2.attack = 10;

	monster.PrintInfo(monster2);
}




/*
	실습
	1) 플레이어, 몬스터 각각의 스탯이 존재
	2) 플레이어와 몬스터가 가위바위보
	3) 이긴 쪽이 한 대 때리기
	4) 한쪽이 죽을 때까지 가위바위보 (이 무슨 죽음의 가위바위보)
	어려우면 돌아가면서 한대씩 때리게 하기 (턴제 전투처럼)
	5) 플레이어가 승리했는지, 패배했는지 출력

	기본 자료형
	언어에서 기본적으로 제공해주는 자료형
	int, float, __int64, char, bool 등

	사용자 정의 자료형
	개발자가 직접 만드는 자료형
	enum, struct, class 등

	구조체는 변수 + 함수를 묶어놓는 기능
*/