#include<iostream>

using namespace std;

enum class ERockScissorPaper
{
	Rock,
	Scissor,
	Paper,
	End
};


void main()
{
	int hand = (int)ERockScissorPaper::Rock;
	switch (hand)
	{
	case (int)ERockScissorPaper::Rock:
		cout << "바위" << endl;
		break;

	case (int)ERockScissorPaper::Scissor:
		cout << "가위" << endl;
		break;
	
	case (int)ERockScissorPaper::Paper:
		cout << "보자기" << endl;
		break;

	default:
		cout << "잘못된 숫자" << endl;
		break;
	}

	if (hand == (int)ERockScissorPaper::Rock)
	{
		cout << "바위" << endl;
	}
	else if (hand == (int)ERockScissorPaper::Scissor)
	{
		cout << "가위" << endl;
	}
	else if (hand == (int)ERockScissorPaper::Paper)
	{
		cout << "보자기" << endl;
	}
	else
	{
		cout << "잘못된 숫자" << endl;
	}

}

/*
	3. switch 문법
	- 안 배워도 되는 문법
	- if문으로 완벽하게 대체 가능

	근데 왜 사용하냐? 가독성 때문

	while문을 배운 이유와 같음
	for문이 더 상위호환이지만 가독성 측면에서 달라짐

	switch문
	case와 default는 항상 break와 함께 가야 함

	if문과 switch문의 차이점
	if문은 조건식을 적는 거라 정수가 아닌 다른 값도 받을 수 있음
	그러나 switch문은 정수만 받을 수 있음
	case 정수:

	그렇기 때문에 switch문엔 제약사항이 더 붙는 편,
	다만 그 제약사항이 더 좋게 작용할 때가 많아서 사용함 + 가독성 향상
	
	당장은 쓰라고 추천 안함, 쓰고 싶으면 써도 됨, 사용하면 가독성은 확실하게 오름

	while문을 보면 ~하늗 동안 반복하겠구나
	for문을 보면 몇 번 반복하겠구나
	switch문은 저 값에 따라 뭔가 이뤄지겠구나
	같은 생각이 바로 드는데
	if문은 딱 봤을 때 바로 판단할 수 없어서 긴장감을 줌... 가독성이 떨어짐.


*/