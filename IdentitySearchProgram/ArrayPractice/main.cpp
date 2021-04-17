//20415 ������
#include <iostream>
using namespace std;

char number[15];
int intNumber[15];

void GenderPrint()
{
	cout << "���� : ";

	if (intNumber[6] == 1 || intNumber[6] == 3)
	{
		cout << "���� (��)";
	}
	else
	{
		cout << "���� (��)";
	}
}

void AgePrint()
{
	cout << "\n��� ���� : ";

	int year = intNumber[0] * 10 + intNumber[1];

	if (intNumber[6] == 3 || intNumber[6] == 4)
	{
		year += 2000;
	}

	if (intNumber[6] == 1 || intNumber[6] == 2)
	{
		year += 1900;
	}

	cout << year << "�⵵" << endl;

	cout << "\n���� : " << 2021 - year + 1 << "��(��)";
}

void BirthPlacePrint()
{
	cout << "\n��� ���� : ";

	int localNumber = intNumber[7] * 10 + intNumber[8];

	if (localNumber <= 8)
	{
		cout << "����";
	}
	else if (localNumber <= 12)
	{
		cout << "�λ�";
	}
	else if (localNumber <= 15)
	{
		cout << "��õ";
	}
	else if (localNumber <= 25)
	{
		cout << "���";
	}
	else if (localNumber <= 34)
	{
		cout << "������";
	}
	else if (localNumber <= 39)
	{
		cout << "��û�ϵ�";
	}
	else if (localNumber <= 47)
	{
		cout << "��û����";
	}
	else if (localNumber <= 54)
	{
		cout << "����ϵ�";
	}
	else if (localNumber <= 66)
	{
		cout << "���󳲵�";
	}
	else
	{
		cout << "���";
	}
}

void IdentityCheck()
{
	int identityNumber = 0;

	for (int i = 0; i < 8; i++)
	{
		identityNumber += (intNumber[i] * (i + 2));
	}

	for (int i = 8; i < 12; i++)
	{
		identityNumber += (intNumber[i] * (i - 6));
	}

	identityNumber = (11 - (identityNumber % 11)) % 10;

	if (identityNumber == intNumber[12])
		cout << "\n��ȿ�� �ֹε�Ϲ�ȣ �Դϴ�. ";
	else
		cout << "\n��ȿ���� ���� �ֹε�Ϲ�ȣ �Դϴ�. ";
}

int main() 
{
	cout << "�ֹ� ��� ��ȣ�� '-' ���� 13�ڸ� �Է��ϼ��� : ";
	cin >> number;

	for (int i = 0; i < 15; i++)
	{
		intNumber[i] = number[i] - '0';
	}

	cout << endl;
	GenderPrint();
	cout << endl;
	AgePrint();
	cout << endl;
	BirthPlacePrint();
	cout << endl;
	IdentityCheck();
	cout << endl;

	return 0;
}