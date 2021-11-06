// ArrayConsucative.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <map>
#include <queue>
#include <set>


using namespace std;

int main()
{
    std::cout << "Hello World!\n";

	//Declaration//
	queue<int> q;    //declaration of q//
	
	int key = 0;     //declaration of map//
	map< vector<int>, int> mp;

	set<vector<int>, int> st;
	
	//*****************************//

	int Array[] = { 6,20,25,21,22,1,2,5,4,8,16,17,19,3};

	int siz = sizeof(Array)/sizeof(Array[0]);

    sort(Array,Array + siz);

	int count = 0,ans = 0;

	vector<int> v;
	v.push_back(Array[0]);

	for (int i = 1; i < siz; i++)
	{
		if (Array[i] != Array[i - 1])
		{
			v.push_back(Array[i]);
		}
	}

	

	for (int i = 0; i < v.size(); i++)
	{

		// Check if the current element is equal
		// to previous element +1
		if (i > 0 && v[i] == v[i - 1] + 1)
			count++;
		
		// reset the count
		else
			count = 1;

		// update the maximum
		ans = max(ans, count);
	}
	cout << "consutive Elements : " << ans;
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
