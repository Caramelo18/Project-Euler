#include <iostream>

using namespace std;

// ----- PROBLEM 3 -----
int main()
{
	unsigned long long x = 600851475143;

	for (unsigned long long d = 1; d < x; d = d + 2)
	{
		if (x % d == 0)
		{
			int i = 2;
			for (i; i < d; i++)
			{
				if (d % i == 0)
					break;
			}
			if (i == d)
				cout << d << endl;
		}
	}
	return 0;
}
