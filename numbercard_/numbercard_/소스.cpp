#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main()
{
	int m, n;
	cin >> m;
	unordered_set<int>set;
	for (int i = 0; i < m; i++)
	{
		cin >> n;
		set.insert(n);
	}
	cin >> m;
	vector<bool>vec;
	for (int i = 0; i < m; i++)
	{
		cin >> n;
		if (set.count(n))
			vec.push_back(1);
		else
			vec.push_back(0);
	}
	for (auto i : vec)
		cout << i << ' ';
	return 0;
}