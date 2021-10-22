#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		while (!(n % i))
		{
			cout << i << '\n';
			n /= i;
		}
	}
	
	return 0;
}