#include <iostream>
#include <string>

using namespace std;

#include "bubbleSort.h"

int main()
{
	string arr[6] = {"fifty", "5", "15", "50", "five", "fifteen"};
	
	sort(arr);
	
	cout << "Data valid: " << (arr[0] < arr[1]) << endl;

	for(int i = 0; i < 6; i++)
	{
		cout << arr[i] << endl;
	}

	cin.get();

}