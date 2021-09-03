#include <iostream>
using namespace std;
int main()
{
	int n;
	int result = 0;
	cin >> n;
	while (n != 1)
	{
		if ((n - 1) % 3 == 0)
		{
			n--;
			result++;
		}
		if (n % 3 == 0)
			n /= 3;
		else if (n % 2 == 0)
			n /= 2;
		else
			n--;
		result++;
	}
	cout << result;
	return 0;
}