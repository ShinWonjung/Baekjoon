#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
	if (n < 2) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false;
	for (int i = 3; i <= sqrt(n); i++)
	{
		if (n % i == 0) return false;
	}
	return true;
}

int main()
{
	int m, n;
	cin >> m >> n;
	int sum = 0;
	int min;
	for (int i = m; i <= n; i++)
	{
		if (isPrime(i))
		{
			if (sum == 0) min = i;
			sum += i;
		}
	}
	if (sum == 0)
		cout << -1;
	else
		cout << sum << '\n' << min;
	return 0;
}