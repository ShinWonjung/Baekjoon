#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n == 1)
	{
		cin >> n;
		cout << n * n;
		return 0;
	}
	int su;
	vector<int>vec(n, 0);
	for (int i = 0; i < n; i++)
	{
		cin >> su;
		vec[i] = su;
	}
	sort(vec.begin(), vec.end());
	cout << vec.front() * vec.back();
	return 0;
}