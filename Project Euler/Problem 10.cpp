#include <iostream>

using namespace std;

// ----- PROBLEM 10 -----

bool isPrime(int num)
{
	for (int i = 2; i <= (int)sqrt(num); i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	long long sum = 0;
	for (int i = 2; i < 2000000; i++)
	{
		if (isPrime(i))
		{
			sum = sum + i;
		}

	}
	cout << sum << endl;
	return 0;
}