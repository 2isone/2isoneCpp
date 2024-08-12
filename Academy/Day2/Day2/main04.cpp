#include<iostream>

using namespace std;

int main()
{
	int year = 2024;

	if (year == 2024)
	{
		printf("올해는 2024년도 입니다.\n");
	}

	if (year != 2024)
	{
		printf("올해는 2024년도가 아닙니다.\n");
	}

	int hp = 10;

	if (hp > 0)
	{
		printf("이 유닛은 살아있습니다.\n");
	}

	else
	{
		printf("이 유닛은 죽었습니다.\n");
	}

}

/*
	[if]문
	프로그래밍에서 제일 중요하고 가장 많이 사용함
	정의: ~면 ~한다.
	if문 사용 방법
	> if ( boolean )
	{
		boolean이 true면 실행할 내용
	}

	[비교 연산자]
	> (왼쪽이 더 크면)
	< (오른쪽이 더 크면)
	>= (왼쪽이 오른쪽보다 같거나 크면)
	<= (오른쪽이 왼쪽보다 같거나 크면)
	== (왼쪽과 오른쪽이 같으면)
	!= (왼쪽과 오른쪽이 같으면)

	비교 연산자의 결과는 항상 boolean (true or false)

	[if else]문
	if ( boolean )
	{
		boolean이 true면 실행할 내용
	}
	else
	{
		boolean이 false면 실행할 내용
	}

	[if else if else]문
	if ( boolean1 )
	{
		boolean1이 true면 실행할 내용
	}
	else if ( boolean2 )
	{
		boolean1이 false이고 boolean2이 true면 실행할 내용
	}
	else
	{
		boolean1과 boolean2가 false이면 실행할 내용
	}

*/