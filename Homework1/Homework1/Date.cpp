#include "Date.h"

Date::Date()
{
	nMonth = 1;
	nDay = 1;
	nYear = 2000;
}

Date::Date(int month, int day, int year)
{
	setMonth(month);
	setDay(day);
	setYear(year);
};

void Date::setDay(int day)
{
  int maxDays;

  if (monthName == "February")
    maxDays = 28;
  else
    maxDays = 30;

  if (day < 1 || day > maxDays)
    nDay = 1;
  else
    nDay = day;
}

void Date::setMonth(int month)
{
  if (month < 1 || month > 12)
    nMonth = 1;
  else
    nMonth = month;
}

void Date::setYear(int year)
{
  if(year < 1900)
    nYear = 1900;
  else
    nYear = year;
}

string Date::getMonthName()
{
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
  cout << nDay << "/" << nMonth << "/" << nYear << endl;
}

void Date::printLong()
{
	monthName = getMonthName();
  cout << nDay << " " << monthName << " " << nYear << endl;
}
