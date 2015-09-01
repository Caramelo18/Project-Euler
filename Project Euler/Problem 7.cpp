#include <iostream>

using namespace std;

// ----- PROBLEM 7 -----

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
	int count = 0;
	int i = 2;
	while (count <= 10001)
	{
		if (isPrime(i))
		{
			count++;
			cout << i << " " << count << endl;
		}
		i++;
	}
	return 0;
}