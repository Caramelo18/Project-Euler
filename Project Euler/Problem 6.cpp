#include <iostream>

using namespace std;

// ----- PROBLEM 6 -----

int main()
{
	int sumsq, sqsum;
	sumsq = 0;
	sqsum = 0;

	for (int i = 1; i < 101; i++)
	{
		sumsq = sumsq + (i*i);
	}

	for (int i = 1; i < 101; i++)
	{
		sqsum = sqsum + i;
	}
	sqsum = sqsum*sqsum;

	cout << sumsq << endl;
	cout << sqsum << endl;
	int diff = sqsum - sumsq;
	cout << diff << endl;

	return 0;
}