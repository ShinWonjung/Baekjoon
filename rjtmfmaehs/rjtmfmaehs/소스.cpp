#include <iostream>

using namespace std;

int main()
{
	int n, ans = 0;
	cin >> n;
	while (n % 5)
	{
		if (n < 2)
		{
			cout << "-1";
			return 0;
		}
		ans++;
		n -= 2;
	}
	ans += (n / 5);
	cout << ans;
	return 0;
}