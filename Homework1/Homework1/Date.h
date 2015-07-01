#ifndef DATE.h

#include <string>
#include <iostream>
#include <string>

using namespace std;

class Date
{
  private:
	int nMonth;
	int nDay;
	int nYear;
    string monthName;
  public:
	Date();
	Date(int month, int day, int year);

	void setMonth(int month);
	void setDay(int day);   
    void setYear(int year);

	int getMonth() { return nMonth; }
	int getDay() { return nDay; }
	int getYear() { return nYear; }
    string getMonthName();

	void print();
    void printLong();
};
#endif