#include <iostream>

using namespace std;
int arr[10001];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		int su;
		cin >> su;
		arr[su]++;
		if (su > max)
			max = su;
	}
	for (int i = 1; i <= max; i++)
	{
		for (int j = 0; j < arr[i]; j++)
			cout << i << '\n';
	}

	return 0;
}