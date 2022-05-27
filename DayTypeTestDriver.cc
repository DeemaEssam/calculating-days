#include <iostream>
#include <string>
#include "DayType.h"


int main()
{
  dayType userDay;
  int Day;
  int addDays;

//let the user choose
  cout << "***** Please enter a day of the week *****" << endl;
  cout << "(0) for Sunday" << endl;
  cout << "(1) for Monday" << endl;
  cout << "(2) for Tuesday" << endl;
  cout << "(3) for Wednesday" << endl;
  cout << "(4) for Thursday" << endl;
  cout << "(5) for Friday" << endl;
  cout << "(6) for Saturday" << endl;
  cout << "(9) to exit" << endl;
  
  cout<<endl;
  cout << "Enter your selection: ";
  cin >> Day;
  cout<<endl;
//set the current Day
  if (Day == 0)
  {
  userDay.set_Day("Sunday");
  }

  else if (Day == 1)
  {
  userDay.set_Day("Monday");
  }

  else if (Day == 2)
  {
  userDay.set_Day("Tuesday");
  }

  else if (Day == 3)
  {
  userDay.set_Day("Wednesday");
  }

  else if (Day == 4)
  {
  userDay.set_Day("Thursday");
  }

  else if (Day == 5)
  {
  userDay.set_Day("Friday");
  }

  else if (Day == 6)
  {
  userDay.set_Day("Saturday");
  }

  else if (Day == 9)
  {
  cout << "Exiting...";
  return 0;
  }

  else
  {
  cout << "Not a valid choice." << endl;
  }

  // print the day
  userDay.print_Day();
  cout << endl;
  //show the day
  userDay.return_Day(Day);
  cout << endl;
  //return the next day
  userDay.return_next_Day(Day);
  cout << endl;
  //return the previous day
  userDay.return_prev_Day(Day);
  cout << endl;
  //calculated day
  cout << "Enter the number of days to add: ";
  cin >> addDays;
  cout << endl;
  userDay.calc_Day(Day, addDays);
  cout << endl;
  cout << endl << endl;
  
    return 0;
}
