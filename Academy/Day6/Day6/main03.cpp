#include<iostream>

using namespace std;

void main()
{
	//1번
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "[" << i << " " << j << "] ";
		}
		cout << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (j <= i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << endl << endl;

	//2번
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i + j <= 4)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}


	cout << endl << endl;

	//3번
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i >= 4 - j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << endl << endl;


	//4번
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i <= j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << endl << endl;


	//5번
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (j <= i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		for (int j = 0; j < 5; j++)
		{
			if (i + j <= 4)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i >= 4 - j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		for (int j = 0; j < 5; j++)
		{
			if (i <= j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

}

/*
	2. 숙제풀이 - 별찍기
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


*/