#include <iostream>
using namespace std;

bool IsLeapYear(int year)
{
	return((year % 4 == 0) && (year % 100 != 0) || ((year % 100 == 0) && (year % 400 == 0)));
}


int main(){
	
}