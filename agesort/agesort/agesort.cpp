#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
bool compare(pair<pair<int, string>,int>p1, pair<pair<int, string>,int>p2)
{
	if (p1.first.first == p2.first.first)
		return p1.second < p2.second;
	else
		return p1.first.first < p2.first.first;
}
int main()
{
	int test;
	cin >> test;
	vector<pair<pair<int, string>,int>>v;
	for (int t = 0; t < test; t++)
	{
		int age;
		string name;
		cin >> age;
		getline(cin, name);
		v.push_back(make_pair(make_pair(age, name),t));
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < v.size(); i++)
		cout << v[i].first.first  << v[i].first.second << '\n';
	return 0;
}