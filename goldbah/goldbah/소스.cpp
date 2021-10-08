#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	while (1)
	{
		cin >> n;
		if (n == 0) return 0;
		if (n <= 4)
		{
			cout << "Goldbach's conjecture is wrong.\n";
			continue;
		}
		int i, j;
		bool flag = false;
		for (i = 3; i <= n / 2; i += 2)
		{
			j = n - i;
			if (isPrime(i) && isPrime(j))
			{
				flag = true;
				break;
			}
		}
		if (flag)
			cout << n << " = " << i << " + " << j << '\n';
		else
			cout << "Goldbach's conjecture is wrong\n";
	}
}