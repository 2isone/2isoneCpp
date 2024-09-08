#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

void GotoXY(int x, int y);

void main()
{
	cout << "출력" << endl;
	//system(" mode  con lines=50   cols=80 ");

	GotoXY(0, 0); cout << "┌────────────────────────────────────────────────────┐";
	GotoXY(0, 1); cout << "│ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ│";
	GotoXY(0, 2); cout << "│ㅤㅤㅤ1. Play Gameㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ│";
	GotoXY(0, 3); cout << "│ㅤㅤㅤ2. Exit Gameㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ│";
	GotoXY(0, 4); cout << "│ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ│";
	GotoXY(0, 5); cout << "│ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ│";
	GotoXY(0, 6); cout << "└────────────────────────────────────────────────────┘";

	GotoXY(20, 1); cout << "플레이어 골드 : 1000";

	GotoXY(3, 2);
	cout << "▶▷";
	int choice = 0;
	while (true)
	{

		if (_kbhit())	//키보드를 눌렀다면
		{
			char inputkey = _getch();	//누른값을 inputkey에 담겠다.
			GotoXY(3, 2 + choice);
			cout << "ㅤㅤ";	//기존거를 지워주고
			if (inputkey == 's')
			{
				choice++;
			}
			else if (inputkey == 'w')
			{
				choice--;
			}
			GotoXY(3, 2 + choice);
			cout << "▶▷";	// 새로 그 위치에 그린다.
		}
	}
}

// 콘솔창의 커서위치를 x, y로 변경해주겠다.
void GotoXY(int x, int y)
{
	COORD pos = { x, y };
	::SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

