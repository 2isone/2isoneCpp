#include<iostream>

using namespace std;

int main()
{
	int year = 2024;

	if (year == 2024)
	{
		printf("���ش� 2024�⵵ �Դϴ�.\n");
	}

	if (year != 2024)
	{
		printf("���ش� 2024�⵵�� �ƴմϴ�.\n");
	}

	int hp = 10;

	if (hp > 0)
	{
		printf("�� ������ ����ֽ��ϴ�.\n");
	}

	else
	{
		printf("�� ������ �׾����ϴ�.\n");
	}

}

/*
	[if]��
	���α׷��ֿ��� ���� �߿��ϰ� ���� ���� �����
	����: ~�� ~�Ѵ�.
	if�� ��� ���
	> if ( boolean )
	{
		boolean�� true�� ������ ����
	}

	[�� ������]
	> (������ �� ũ��)
	< (�������� �� ũ��)
	>= (������ �����ʺ��� ���ų� ũ��)
	<= (�������� ���ʺ��� ���ų� ũ��)
	== (���ʰ� �������� ������)
	!= (���ʰ� �������� ������)

	�� �������� ����� �׻� boolean (true or false)

	[if else]��
	if ( boolean )
	{
		boolean�� true�� ������ ����
	}
	else
	{
		boolean�� false�� ������ ����
	}

	[if else if else]��
	if ( boolean1 )
	{
		boolean1�� true�� ������ ����
	}
	else if ( boolean2 )
	{
		boolean1�� false�̰� boolean2�� true�� ������ ����
	}
	else
	{
		boolean1�� boolean2�� false�̸� ������ ����
	}

*/