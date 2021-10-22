#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int>p1, pair<int, int>p2)
{
	if (p1.second != p2.second)
		return p1.second < p2.second;
	else
		return p1.first < p2.first;
}

int main()
{
	int n;
	cin >> n;
	vector<pair<int, int>>vec;
	for (int i = 0; i < n; i++)
	{
		int n1, n2;
		cin >> n1 >> n2;
		vec.push_back(make_pair(n1, n2));
	}
	sort(vec.begin(), vec.end(), compare);
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i].first << ' ' << vec[i].second << '\n';
	}
	return 0;
}
