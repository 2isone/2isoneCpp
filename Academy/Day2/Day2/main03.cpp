#include<iostream>

using namespace std;

int main()
{
	int year;
	int month;
	int day;
	char name[100];

	printf("태어난 년도를 입력해주십시오. : ");
	scanf_s("%d", &year);

	printf("당신의 생일을 입력해주십시오. : ");
	scanf_s("%d %d", &month, &day);

	printf("당신의 이름을 입력해주십시오. : ");
	scanf_s("%s", name, (int)sizeof(name));

	printf("당신이 태어난 해는 %d년, 생일은 %d월 %d일, 이름은 %s 입니다.", year, month, day, name);

}

/*
	사용자에게서 직접 값을 입력 받는 방법

	[입력]
	scanf_s 라는 함수를 이용
	사용법: scanf_s("%d", &변수명);
	> 변수 안에 사용자가 입력한 값이 들어감
	문자열 입력의 경우
	> scanf_s("%s", 변수명, (int)sizeof(변수명));
*/