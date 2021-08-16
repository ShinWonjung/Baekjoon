#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<int>v;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;

		bool b = false;
		int left = 0;
		int right = v.size() - 1;
		while (left <= right)
		{
			int mid = (left + right) / 2;
			if (num == v[mid])
			{
				b = true;
				break;
			}
			else if (num < v[mid])
			{
				right = mid - 1;
			}
			else
			{
				left = mid + 1;
			}
		}
		if (b == true) cout << 1 << '\n';
		else cout << 0 << '\n';
	}
	return 0;
}