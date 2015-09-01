#include <iostream>

using namespace std;

// ----- PROBLEM 9 -----

int main()
{
	int a, b, c;

	for (a = 1; a < 1000; a++)
	{
		for (b = 1; b < 1000; b++)
		{
			for (c = 1; c < 1000; c++)
			{
				if (a + b + c == 1000)
					if (a*a + b*b == c*c)
					{
						cout << a << " " << b << " " << c << endl;
						cout << a*b*c << endl;
					}
			}
		}
	}

	return 0;
}