#include <iostream>
#include <string>
#include "DayType.h"

	void dayType::set_Day(string newDay)
	{
	  Day = newDay;
	}

	void dayType::print_Day()
	{
	  cout<<"The day you chose is:"<< Day;
	}
  //return the day
	int dayType::return_Day(int& Day)
	{
	  return Day;
	}
	//return the next day
	int dayType::return_next_Day(int Day)
	{
	Day = Day+1;
	if (Day > 6)
	Day = Day % 7;
	switch (Day)
	{
	case 0: cout << "The next day is 'Sunday'";
	break;
	case 1: cout << "The next day is 'Monday'";
	break;
	case 2: cout << "The next day is 'Tuesday'";
	break;
	case 3: cout << "The next day is 'Wednesday'";
	break;
	case 4: cout << "The next day is 'Thursday'";
	break;
	case 5: cout << "The next day is 'Friday'";
	break;
	case 6: cout << "The next day is 'Saturday'";
	break;
	}
	cout << endl;
	return Day;
	}
	//return the previous Day
	int dayType::return_prev_Day(int Day)
	{
	Day = Day-1;
	switch (Day)
	{
	case -1: cout << "The previous day is 'Saturday'.";
	break;
	case 0: cout << "The previous day is 'Sunday'.";
	break;
	case 1: cout << "The previous day is 'Monday'.";
	break;
	case 2: cout << "The previous day is 'Tuesday'.";
	break;
	case 3: cout << "The previous day is 'Wednesday'.";
	break;
	case 4: cout << "The previous day is 'Thursay'.";
	break;
	case 5: cout << "The previous day is 'Friday'.";
	break;
	default: cout << "The previous day was before today.";
	}
	cout << endl;
	return Day;
	}
	//return the calculated Day
	int dayType::calc_Day(int addDays, int numDays)
	{
	  addDays = addDays + numDays;
	  if (addDays > 6)
	  addDays = addDays % 7;
	  switch(addDays)
	  {
	  case 0: cout << "The calculated day is 'Sunday'.";
	  break;
	  case 1: cout << "The calculated day is 'Monday'.";
	  break;
	  case 2: cout << "The calculated day is 'Tuesday'.";
	  break;
	  case 3: cout << "The calculated day is 'Wednesday'.";
	  break;
	  case 4: cout << "The calculated day is 'Thursday'.";
	  break;
	  case 5: cout << "The calculated day is 'Friday'.";
	  break;
	  case 6: cout << "The calculated day is 'Saturday'.";
	  break;
	  default: cout << "Not valid choice.";
	  }
	cout << endl;
	return addDays;
	}