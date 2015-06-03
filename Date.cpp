//Kevin Baker
//Summer 2015, C++ Programming
//27 May 2015

#include "Date.h"
#include <iomanip>

Date::Date() //Default constructor to initialize an object without params
{
	nMonth = 1;
	nDay = 1;
	nYear = 2000;
}

Date::Date(int month, int day, int year) //Constructor for object with params
{
	setMonth(month);  //
	setDay(day);      // These functions will ensure valid month, day and year
	setYear(year);    //
};

void Date::setMonth(int month)
{
  // Month must be between 1 and 12
  if (month < 1 || month > 12)
    nMonth = 1;
  else
    nMonth = month;
}

void Date::setDay(int day)
{
  // Days in the month must be proper for the month (Feb assumed 28 days)
  int maxDays;

  if (nMonth == 2)
    maxDays = 28;
  else
    maxDays = 30;

  if (day < 1 || day > maxDays)
    nDay = 1;
  else
    nDay = day;
}

void Date::setYear(int year)
{
  // Year can't be less than 1900
  if(year < 1900)
    nYear = 1900;
  else
    nYear = year;
}

string Date::getMonthName()
{
  // Return the month name for the chosen month
  if (nMonth == 1)
    return "January";
  else if (nMonth == 2)
    return "February";
  else if (nMonth == 3)
    return "March";
  else if (nMonth == 4)
    return "April";
  else if (nMonth == 5)
    return "May";
  else if (nMonth == 6)
    return "June";
  else if (nMonth == 7)
    return "July";
  else if (nMonth == 8)
    return "August";
  else if (nMonth == 9)
    return "September";
  else if (nMonth == 10)
    return "Octobober";
  else if (nMonth == 11)
    return "November";
  else if (nMonth == 12)
    return "December"; 
}

void Date::print()
{
  // Short date format, ie 01/01/2000
  cout.fill('0');
  cout << setw(2) << nDay << "/" << setw(2) << nMonth << "/" << nYear << endl;
}

void Date::printLong()
{
  // Long date format, ie 1 January 2000
	string monthName = getMonthName();
  cout << setw(2) << nDay << " " << monthName << " " << nYear << endl;
}
