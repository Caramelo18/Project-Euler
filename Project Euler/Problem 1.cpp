// ----- PROBLEM 1 -----

#include <iostream>

using namespace std;

int main()
{
	int n = 1;
	int sum = 0;
	while (n < 1000)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum = sum + n;
		}
		n++;
	}
	cout << sum << endl;
	return 0;
}
