#pragma warning(disable: 4996)
#include <iostream>
#include <ctime>
using namespace std;

/*
int tm_sec;   // seconds after the minute - [0, 60] including leap second
int tm_min;   // minutes after the hour - [0, 59]
int tm_hour;  // hours since midnight - [0, 23]
int tm_mday;  // day of the month - [1, 31]
int tm_mon;   // months since January - [0, 11]
int tm_year;  // years since 1900
int tm_wday;  // days since Sunday - [0, 6]
int tm_yday;  // days since January 1 - [0, 365]
int tm_isdst; // daylight savings time flag

*/
int main()
{
	time_t t = time(0); //	get time now
	char* dt = ctime(&t);	//convert in string form
	cout << "Local Date and Time : " << dt << endl;

	tm* now = localtime(&t);

	cout << "Year : " << now->tm_year + 1900 << endl;
	cout << "Month : " << now->tm_mon << endl;
	cout << "Day : " << now->tm_mday << endl;
	cout << "hour : " << now->tm_hour << endl;
	cout << "Minute : " << now->tm_min << endl;
	cout << "Second : " << now->tm_sec << endl;
	cout << "Week Day (Days since Sunday) : " << now->tm_wday << endl;
	cout << "Year Day (Days since 1st Jun) : " << now->tm_yday << endl;
	cout << "Hours of daylight savings time : " << now->tm_isdst << endl;
}

