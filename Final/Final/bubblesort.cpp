#pragma once

#include <string>

#include "bubbleSort.h"

using std::string;

const int size = 6;

bool compare(string & first, string & second)		//Returns false when the data was ordered properly, true when the data needed to be modified
{
	if(first > second)
	{
		string swap = second;
		second = first;
		first = swap;
		return true;
	}
	else return false;
}

void sort(string(&data)[size])
{
	
	bool inOrder = false;

	while(!inOrder)
	{
		inOrder = true;
		//Make a pass and make comparisons
		for(int i = 0; i < size - 1; i++)
		{
			if(compare(data[i], data[i + 1]))	//Check the data, swap elements if needed
			{
				inOrder = false;
			}
		}
	}

}