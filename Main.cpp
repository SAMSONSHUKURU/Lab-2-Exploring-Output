/*
Samson Shukuru
C++ Fall 2022
Due: Sep. 14, 2022
Lab 2
Designed to get familiar output the command prompt using C++

*/
#include <iostream>
#include <string>
using namespace std; 

int main()

{
	// strings that store days of the week
	string m = "Monday ";
	string t = "Tuesday ";
	string w = "Wednesday ";
	string th = "Thursday ";
	string f = "Friday ";

	// strings that store classes for the fall semsester 
	string aTrig = " Algebra & Trig";
	string cc = " C++";
	string AF = " African Cultures";
	string iR = " International Relations";

	// outputs the day,time, and class throughout the week ,l
	cout << m << "\t8:00" << aTrig << "\n";
	cout << m << "\t10:00" << cc << "\n";
	cout << m << "\t11:45" << iR << "\n" << endl;

	cout << t << "8:00" << aTrig << "\n";
	cout << t << "10:00" << cc << "\n";
	cout << t << "11:30" << AF << "\n" << endl;

	cout << w << "8:00" << aTrig << "\n";
	cout << w << "10:00" << cc << "\n";
	cout << w << "11:45" << iR << "\n" << endl;

	cout << th << "8:00" << aTrig << "\n";
	cout << th << "10:00" << cc << "\n";
	cout << th << "11:30" << AF << "\n" << endl;

	cout << f << " 8:00" << aTrig << "\n";
	cout << f << "\t10:00" << cc << "\n";
	cout << f << "\t11:45" << iR << "\n" << endl;
	

	return 0;
}