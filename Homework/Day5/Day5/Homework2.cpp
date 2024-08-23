#include<iostream>

using namespace std;

void main()
{
	cout << "1번" << endl; //1번

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl << "2번" << endl; //2번

	for (int i = 0; i < 5; i++) 
	{
		for (int j = 5; i<j; j--)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl << "3번" << endl; //3번

	for (int i = 0; i <5; i++)
	{
		for (int j = 5; i < j; j--)
		{
			cout << " ";
		}
		for (int k = 0; k <= i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl << "4번" << endl; //4번

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}
		for (int k = 5; i < k; k--)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl << "5번" << endl; //5번
	
	for (int i = 0; i < 5; i++)
	{
		cout << " ";

		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		for (int k = 4; i < k; k--)
		{
			cout << " ";
		}
		for (int l = 5; i < l; l--)
		{
			cout << "*";
		}

		cout << endl;
	}
	

	for (int i = 0; i < 5; i++)
	{
		for (int j = 5; i < j; j--)
		{
			cout << " ";
		}
		for (int k = 0; k <= i; k++)
		{
			cout << "*";
		}
		for (int l = 0; l < i; l++)
		{
			cout << " ";
		}
		for (int m = 5; i < m; m--)
		{
			cout << "*";
		}

		cout << endl;
	}

}

/*
		2. 별 찍기

	2중포문을 활용하여 아래 별을 찍어보세요.

	1번
	*
	**
	***
	****
	*****

	2번
	*****
	****
	***
	**
	*

	 3번
		 *
		**
	   ***
	  ****
	 *****

	 4번
	 *****
	  ****
	   ***
		**
		 *

	 5번
	 *    *****
	 **   ****
	 ***  ***
	 **** **
	 ******
		 ******
		** ****
	   ***  ***
	  ****   **
	 *****    *

	 너무 어려우면 4번까지만 해도 Ok.
*/

/*
	개인 사정으로 과제할 시간이 부족해서 2번은 수도 코드 없이 머리에서 바로 꺼내서...
	실행 및 수정해가면서 작성했습니다.
	주말 동안 수도 코드 작성 및 재코딩 해볼 생각입니다. 
*/