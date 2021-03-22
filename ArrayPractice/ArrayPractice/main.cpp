//20415 이준협
#include <iostream>
using namespace std;

char number[15];
int intNumber[15];

void GenderPrint()
{
	cout << "성별 : ";

	if (intNumber[6] == 1 || intNumber[6] == 3)
	{
		cout << "남자 (♂)";
	}
	else
	{
		cout << "여자 (♀)";
	}
}

void AgePrint()
{
	cout << "\n출생 연도 : ";

	int year = intNumber[0] * 10 + intNumber[1];

	if (intNumber[6] == 3 || intNumber[6] == 4)
	{
		year += 2000;
	}

	if (intNumber[6] == 1 || intNumber[6] == 2)
	{
		year += 1900;
	}

	cout << year << "년도" << endl;

	cout << "\n나이 : " << 2021 - year + 1 << "살(세)";
}

void BirthPlacePrint()
{
	cout << "\n출생 지역 : ";

	int localNumber = intNumber[7] * 10 + intNumber[8];

	if (localNumber <= 8)
	{
		cout << "서울";
	}
	else if (localNumber <= 12)
	{
		cout << "부산";
	}
	else if (localNumber <= 15)
	{
		cout << "인천";
	}
	else if (localNumber <= 25)
	{
		cout << "경기";
	}
	else if (localNumber <= 34)
	{
		cout << "강원도";
	}
	else if (localNumber <= 39)
	{
		cout << "충청북도";
	}
	else if (localNumber <= 47)
	{
		cout << "충청남도";
	}
	else if (localNumber <= 54)
	{
		cout << "전라북도";
	}
	else if (localNumber <= 66)
	{
		cout << "전라남도";
	}
	else
	{
		cout << "경상도";
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
		cout << "\n유효한 주민등록번호 입니다. ";
	else
		cout << "\n유효하지 않은 주민등록번호 입니다. ";
}

int main() 
{
	cout << "주민 등록 번호를 '-' 없이 13자리 입력하세요 : ";
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