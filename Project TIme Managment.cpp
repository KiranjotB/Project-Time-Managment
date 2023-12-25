#include <iostream>
using namespace std;

//Kiranjot K. Bhatia
//The purpose of this program is to allow the user
//to plan out their day, to their best interests.
//The number of working hours should not exceed 8.

//const int UNI = 8;
const int HALF = 4;
int main()
{
	//Variable definitions
	int hour_number = 0;        //number of hours that may be worked for
	int project_number = 0;    //number of projects being worked on
	int project_time = 0;     //time spent per project in hours
	//float half_number = 0.0;     //original number divided by 2 to meet a minimum of 50%
					//completion criteria
	int total = 0;     //combined number of all hours worked
	//char response = '\0';   // either a y or n to check if information is correct/incorrect


	//Welcome the user
	cout << "Welcome to your day plan guide."
			 << " We will help you plan out your day to your best interest." << endl;


	//Obtain the required information
	do
	{

	do
	{
		cout << "To start off please enter the number of hours you may work for: " << endl;
		cin >> hour_number;       //number of hours that may be worked for
		cout << "Now please enter the number of projects that you are working on: " << endl;
		cin >> project_number;   //number of projects being worked on
		cout << "Finally please enter the time (in hours) that you will spend on"; 
		cout << " per project: " << endl;
		cin >> project_time;    //time spent per project in hours 
		if(hour_number < 0 || hour_number > 8)
				cout << "The data entered is incorrect. Please try again." << endl;
		if(project_number < 0)
			cout << "The data entered is incorrect. Please try again." << endl;
		if(project_time < 0) 
			cout << "The data entered is incorrect. Please try again." << endl;


	//Echo your information back
	cout << "The number of hours is: " << hour_number << endl;
	cout << "The number of projects is: " << project_number << endl;
	cout << "The number of time spent per project is: " << project_time <<endl;
	}while((hour_number > 8||hour_number < 0) ||(project_time < 0));

	//Total number of hours being spent on combined projects
	total = project_number * project_time;
	cout << "The total number of hours spent on the projects combined is: " <<total <<endl;


	//Is the number in the correct range? Overload or underload?
	if(total > 8) 
		cout << "You are over-working! Please re-enter your values.";	

	const int HALF = 8/2;

	if(total < HALF)
		cout << "You are under the 50% min completion. Please re-enter your values.";

	//Loop when overload or underload
	}while(total > 8 || total < HALF);

	return 0;
}
