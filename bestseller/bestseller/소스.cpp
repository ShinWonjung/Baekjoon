#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool comp(pair<string, int> p1, pair<string, int> p2)
{
	if (p1.second != p2.second)
		return p1.second > p2.second;
	else
		return p1.first < p2.first;
}

int main()
{
	int n;
	cin >> n;
	map<string, int>map;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		map[s]++;
	}
	vector<pair<string, int>>vec(map.begin(), map.end());
	sort(vec.begin(), vec.end(), comp);
	cout << vec.front().first;
	return 0;
}