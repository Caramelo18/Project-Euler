#include <iostream>
#include <vector>
using namespace std;

// ----- PROBELM 2 -----
int main()
{
	vector <int> fib = { 1,2 };
	size_t size = fib.size();
	int n = fib[size - 1] + fib[size - 2];
	while (n <= 4000000)
	{
		size = fib.size();
		n = fib[size - 1] + fib[size - 2];
		fib.push_back(n);
	}
	int sum = 0;
	for (unsigned int i = 0; i < fib.size(); i++)
	{
		if (fib[i] % 2 == 0)
			sum = sum + fib[i];
	}
	cout << sum << endl;
}