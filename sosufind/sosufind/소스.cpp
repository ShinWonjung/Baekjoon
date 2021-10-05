#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
	if (n == 1) return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int num, answer = 0;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		int n;
		cin >> n;
		if (isPrime(n))
			answer++;
	}
	cout << answer;
	return 0;
}