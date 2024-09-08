#pragma once
// 스네이크게임 풀이
#define GAME_TICK 100
struct Point
{
	int x;
	int y;
};
enum class EDirection
{
	Left,
	Up,
	Right,
	Down,
	End
};

class MainGame
{
public:
	void Init();
	void Run();
	void Release();

	void PrintBoard();
	void PrintSnake();
	void HideSnake();
	void PrintFood();
	void HideFood();
	void GenerateFood();
	void UpdateSnake(int tick);

public:
	bool _isGameExit = false;
	Point _boardSize = { 30, 20 };
	Point _snakePos[999] = { {15, 10}, };
	int _snakeLength = 1;
	EDirection _snakeDir = EDirection::Left;
	int _snakeTick = 200;
	int _snakeTickBackUp = 200;
	Point _food = { 0, 0 };
};



/*
#pragma once
class MainGame
{
public: //당분간은 public 고정, 기본은 private이지만 나중에 사용할 것
	void Init(); //초기화해주는 함수
	void Run();
	void Release(); //사용 끝나고 해제해주는 함수

	bool IsGameEnd(); //게임이 종료됐는지를 알려주는 함수
	void ShuffleCard();

public: //기능별로 나눠주는 게 보기 편하므로 분리
	int _card[52] = {}; //클래스 멤버 변수는 _로 시작함 

};

//보통 헤더 파일에선 생성만 하고 cpp 파일에서 구현해줌
*/