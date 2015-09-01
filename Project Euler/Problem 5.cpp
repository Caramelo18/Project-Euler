#include <iostream>

using namespace std;

// ----- PROBELM 5 -----

int main()
{
	for (long i = 21; i < 999999999; i++)
	{
		int j = 1;
		for (j; j <= 20;j++)
		{
			if (i % j != 0)
				break;
			if (j == 20)
				cout << i << endl;
		}
	}
	return 0;
}