#include <iostream>
#include <string>

using namespace std;
class dayType
{
	public:
	  // methods
	  void set_Day(string newDay); //setter
	  void print_Day();
	  int return_Day(int& Day);
	  int return_next_Day(int Day);
	  int return_prev_Day(int Day) ;
	  int calc_Day(int Day, int numDays);
    dayType() //constructor
    {
     days[0] = "Sunday";
     days[1] = "Monday";
     days[2] = "Tuesday";
     days[3] = "Wednesday";
     days[4] = "Thurssday";
     days[5] = "Friday";
     days[6] = "Saturday";
     Day = days[0];
     numDays = 0;
    };

	private:
	  //attributes
	  string days[7];
	  string Day;
	  int addDays;
	  int currentDay;
	  int numDays;


};
