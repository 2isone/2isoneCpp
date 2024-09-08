#include <iostream>
using namespace std;

void main()
{
	
}

/*
	변수명과 함수명
	네이밍 컨벤션

	- snake case
	int my_name;
	get_my_name();

	- camel case
	int myName;
	getMyName();

	- paskal case
	int MyName;
	GetMyName();

	snake case (변수)
	paskal case (함수)
	> C++

	camel case (변수)
	paskal case (함수)
	> C#

	snake case (변수)
	snake case (함수)
	> 개발자가 전문으로 하는 언어가 아니라,
	다른 본업을 가지고 프로그래밍을 하는 포지션에서 사용하는 언어
	쪽에서 많이 사용

	네이밍 컨벤션
	변수의 의미는 보통 무엇무엇을 지칭, 명사
	ex. myName, number

	특이하게 동사를 쓰는 변수
	boolean 변수: 참, 거짓을 알려주는 변수
	앞에 is, can 등이 붙음
	ex. isGamePlaying = ture > 게임 플레이 중인가? 사실
		canJump > 점프를 할 수 있는가?
	
	함수
	함수를 사용하는 형식이 작성한 수도코드에
	이름을 붙여 묶는 식이기 때문에 동사가 될 수밖에 없음
	ex. InitializeDeck, ShuffleDeck

	+ 이런식으로 작성하면 가독성이 좋아짐
	DeckShuffle(); > 이것보단
	ShuffleDeck(); > 앞에 Get, Set, Shuffle 등 액션을 취하는 이름이 붙는 게 시각적으로 파괴적 

*/