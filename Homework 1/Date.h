//Kevin Baker
//Summer 2015, C++ Programming
//27 May 2015

#ifndef DATE.h
#include <string>
#include <iostream>
#include <string>

using namespace std;

// Class definition for Date class

class Date
{
  private:
	  int nMonth;
	  int nDay;
	  int nYear;

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