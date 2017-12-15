//Q1

void copy(double source[], int sourceSize, double(&output)[], int outputSize);

//----------

//Q2
const int M = 5, N = 5;

int arr[M][N];

//----------

//Q3

cout << static_cast<double>(7) / 4 << endl;
//What's the output of the following statement, and explain why. 0.5%

//The result is 1.75 because 7 is handled as a double instead of an integer because of the static_cast<double>


float a = 0.75; double b = 0.75;
//For a and b, which is larger, why ? 0.5 %

//From a data persepctive, b is larger than a because b is a double, and therefore has more memory allocated to it


float c = 0.2; double d = 0.2;
//From a data persepctive, d is larger than c because d is a double, and therefore has more memory allocated to it


//You are giving 6 c++ strings : “5”, “15”, “50”, “five”, “fifteen”, and “fifty”, write them down sorted in ascending order. 1.5 %

//15, 5, 50, fifteen, fifty, five

//-----------

//Q4

sum = 28;

//-----------

//Q5


#include <iostream>
using namespace std;

class Time
{
public:
	Time() { seconds = 0; }
	Time(long _seconds) { seconds = _seconds; }
	Time(int hours, int minutes, int _seconds)
	{
		seconds = hours*HOUR_IN_SECONDS + minutes*MINUTE_IN_SECONDS + _seconds;
	}

	long seconds;

	bool operator==(Time other)	//Replaces Equal
	{
		return seconds == other.seconds;
	}

	void Write24()
	{
		int hour = seconds / HOUR_IN_SECONDS;
		int minute = seconds%HOUR_IN_SECONDS / MINUTE_IN_SECONDS;
		int second = seconds%MINUTE_IN_SECONDS;
		cout << hour << ":" << minute << ":" << second;
	}

	void tick()
	{
		seconds++;
		if(seconds == DAY_IN_SECONDS) seconds = 0;
	}

	static const int DAY_IN_SECONDS = 24 * 60 * 60;
	static const int HOUR_IN_SECONDS = 60 * 60;
	static const int MINUTE_IN_SECONDS = 60;
};

int main() {
	Time eight;
	Time current;

	eight = Time(8, 0, 0);

	current = Time(20, 30, 59);

	if(!(eight == current))
	{
		current.Write24();
		cout << " has passed ";
		eight.Write24();
		cout << endl;
	}

	Time t;

	t = Time(23, 59, 59);
	t.Write24();
	cout << endl;
	t.tick(); // midnight (0:0:0)
	t.Write24();
	cout << endl;

	// advance to 8 AM
	int i = 0;
	while(i<8 * Time::HOUR_IN_SECONDS)
	{
		t.tick();
		i++;
	}
	if(t == eight)
	{
		t.Write24();
		cout << endl;
	}
	cin.ignore();
	return 0;
}

//---------------

//Q6 -- B


//----------------


//Q7 -- D

//NOTE: While potentially inneficient, a singluar array of records (C) would also work


//-----------------

//There are two question '7's
//Q7 -- The second one -- (Actually Q8 if the numbering is corrected)

class Person
{
public:
	Person(int x, int y, int z)
	{
		m_x = x; m_y = y; m_z = z;
	}

	void location(int & x, int & y, int & z)
	{
		x = m_x;  y = m_y;  z = m_z;
	}
private:
	int m_x;  int m_y;  int m_z;
};

//---------------

//Q8 -- (Actually Q9 if the numbering is corrected)

cout << "Supplier ID: " << partsList[10].supplier.idNumber << endl;

//---------------