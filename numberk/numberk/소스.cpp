#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k, num;
	cin >> n >> k;
	vector<int>vec;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		vec.push_back(num);
	}
	sort(vec.begin(), vec.end());
	cout << vec[k - 1];
	return 0;
}