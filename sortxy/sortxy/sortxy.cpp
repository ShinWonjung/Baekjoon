#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(const pair<int, int> &v1, const pair<int, int> &v2)
{
	if (v1.first == v2.first)
		return v1.second < v2.second;
	return v1.first < v2.first;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test;
	cin >> test;
	vector<pair<int, int>>v;
	for (int t = 0; t < test; t++)
	{
		int x, y;
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}
	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].first << ' ' << v[i].second << '\n';
	}

	return 0;
}