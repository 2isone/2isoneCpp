#include<iostream>

using namespace std;

int main()
{
	int year;
	int month;
	int day;
	char name[100];

	printf("�¾ �⵵�� �Է����ֽʽÿ�. : ");
	scanf_s("%d", &year);

	printf("����� ������ �Է����ֽʽÿ�. : ");
	scanf_s("%d %d", &month, &day);

	printf("����� �̸��� �Է����ֽʽÿ�. : ");
	scanf_s("%s", name, (int)sizeof(name));

	printf("����� �¾ �ش� %d��, ������ %d�� %d��, �̸��� %s �Դϴ�.", year, month, day, name);

}

/*
	����ڿ��Լ� ���� ���� �Է� �޴� ���

	[�Է�]
	scanf_s ��� �Լ��� �̿�
	����: scanf_s("%d", &������);
	> ���� �ȿ� ����ڰ� �Է��� ���� ��
	���ڿ� �Է��� ���
	> scanf_s("%s", ������, (int)sizeof(������));
*/