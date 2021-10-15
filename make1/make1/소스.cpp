#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int>vec(n + 1, 1);
	vec[1] = 0;
	for (int i = 4; i <= n; i++)
	{
		vec[i] = vec[i - 1] + 1;
		if (!(i % 3)) vec[i] = min(vec[i], vec[i / 3] + 1);
		if (!(i % 2)) vec[i] = min(vec[i], vec[i / 2] + 1);
	}
	cout << vec[n];
	return 0;
}