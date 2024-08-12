#include<iostream>

using namespace std;

int main()
{
	int age = 23;
	int year = 2002;
	int month = 10;
	int day = 9;
	char name[100] = "이가원";
	char with[100] = "광운대학교";

	printf("나이: %d, 이름: %s, 소속: %s\n", age, name, with);
	printf("생년월일: %d년 %d월 %d일\n", year, month, day);
}

/* [변수]
	프로그래밍에서 무언가를 기억하기 위해 변수를 사용

	변수란 무엇인가? > 변하는 수, 프로그램에서 무언가를 기억하는 방법
	변수를 왜 쓰는가? > 무언가를 기억하기 위해 사용
	변수를 어떻게 사용하는가?
		1. 자료형 변수명 = 값;
		2. 자료형 변수명;
	값: 02, 이가원 같은 내용
	변수명: 내가 앞으로 부를 이름 (개발자가 정함)
	자료형: 정수, 실수, 문자열 등 변수의 형태에 대한 정보

	자료형
	int: integer 정수
	float: 실수
	char: character 문자
	bool: boolean (ture, false) 참, 거짓

	char > 문자열이 아니라 문자 a, b, c 등 단일 문자만 담을 수 있음, 문자열을 담으려면 배열을 사용해야 함

	변수를 출력하는 방법
	정수, 실수, 문자열 등 자료형에 따라 출력 방법이 달라짐
	정수: %d, 실수: %f (float), 문자열: %s (string), 문자: %c (char)

	빌드에서 제외하는 방법
	제외하고 싶은 파일 우클릭 > 속성 > 빌드에서 제외 > 예
	적용, 확인

*/