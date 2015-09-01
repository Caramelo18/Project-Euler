#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// ----- PROBLEM 4 -----

int main()
{
	string n;
	stringstream ss;
	int max = 1;

	for (int i = 999; i > 100; i--)
	{
		for (int j = 999; j > 99; j--)
		{
			int num = i * j;
			string n;
			stringstream ss;
			ss << num;
			n = ss.str();
			if (n[0] == n[5] && n[1] == n[4] && n[2] == n[3])
			{
				if (num > max)
				{
					max = num;
					cout << max << endl;
				}
			}
		}
	}
	return 0;
}
