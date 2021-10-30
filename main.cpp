#include <iostream>
using namespace std;

bool IsLeapYear(int year)
{
	return((year % 4 == 0) && (year % 100 != 0) || ((year % 100 == 0) && (year % 400 == 0)));
}

void LaterInYear(int d1, int m1, int d2, int m2)
{
	if (12 - m1 < 12 - m2)
		cout << d1 << " " << m1;
	else if (12 - m1 == 12 - m2)
	{
		if (d1 > d2)
			cout << d1 << " " << m1;
		else cout << d2 << " " << m2;
	}
	else 
		cout << d2 << " " << m2;
}

int DaysInYear(int year)
{
	return IsLeapYear(year) ? 366 : 365;
}

int DaysInYearRange(int y1, int y2)
{
	int res = 0;
	int years = y2 - y1 + 1;
	for (int i = y1; i <= y2; i++)
	{
		res += DaysInYear(i);
	}
	return res;
}
int main(){
	
}