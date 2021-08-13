#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[9];
	int sum = 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	int su = sum - 100;
	for (int i = 0; i < 8; i++)
	{
		for (int j = i; j < 9; j++)
		{
			if (arr[i] + arr[j] == su)
			{
				arr[i] = 0;
				arr[j] = 0;
				goto here;
			}
		}
	}
here:
	for (int i = 0; i < 9; i++)
	{
		if (arr[i] != 0)
		{
			cout << arr[i] << '\n';
		}
	}
	return 0;
}