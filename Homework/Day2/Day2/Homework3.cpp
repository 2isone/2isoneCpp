#include<iostream>

using namespace std;

void main()
{
	int num, isOdd;

	printf("숫자를 입력해주십시오.\n");
	scanf_s("%d", &num);

	isOdd = num % 2;

	if (isOdd == 0)
	{
		printf("[%d]는 짝수입니다.\n", num);
	}
	else
	{
		printf("[%d]는 홀수입니다.\n", num);
	}
}

/*
	3. 홀수짝수 판별기
	출력 예시
	숫자를 입력해주세요. [14]
	14는 짝수입니다.
*/

/*
	강사님 피드백: result 라는 변수로 또 담아서 처리하고 싶었다면
	변수의 이름이 result가 아닌 isOdd 로 가는 게 좋았을 것 같음.
	result는 결과라는 뜻인데, 이 프로그램이 뭔지 모르는 사람은 헷갈릴 여지가 있음.
	(간단한 코드라 큰 이슈는 아님, 극단적인 예시)

	- 수정완료
*/