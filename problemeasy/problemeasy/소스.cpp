#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int>arr;
	int a, b, cnt = 0;
	cin >> a >> b;
	int n = 1;
	while (cnt != b)
	{
		for (int i = 0; i < n; i++)
		{
			arr.push_back(n);
			cnt++;
			if (cnt == b) break;
		}
		n++;
	}
	int ans = 0;
	for (int i = a - 1; i < b; i++)
	{
		ans += arr[i];
	}
	cout << ans;
	return 0;
}