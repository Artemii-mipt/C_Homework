

#include<iostream>
#include<string>
#include<fstream>

using namespace std;


enum Year 
{
	January,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	Decemnber
};

int days (Year month) 
{
	bool leap;
	cout << "Is it a leap year? Type 1 if it is, 0 if it isn't"<< endl;
	cin >> leap;

	switch (month)
	{
	case Year::January:
	case Year::March:
	case Year::May:
	case Year::July:
	case Year::August:
	case Year::October:
	case Year::Decemnber:
		return 31;

	case Year::April:
	case Year::June:
	case Year::September:
	case Year::November:
		return 30;

	
	case Year::February:
		if (leap)
			return 29;
		return 28;





	}

}





