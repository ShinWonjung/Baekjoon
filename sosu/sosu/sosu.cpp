#include <iostream>
#include <cmath>
using namespace std;
#define LEN 1000001
int arr[LEN];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int m, n;
	cin >> m >> n;
	for (int i = 0; i <= n; i++)
	{
		arr[i] = i;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (arr[i] == 0) continue;
		for (int j = 2; j * i <= n; j++)
		{
			arr[j * i] = 0;
		}
	}
	for (int i = m; i <= n; i++)
	{
		if (i == 1) continue;
		if (arr[i] != 0) cout << arr[i] << '\n';
	}
	return 0;
}