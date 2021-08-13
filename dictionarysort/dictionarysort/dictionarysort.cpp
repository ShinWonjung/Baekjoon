#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
bool compare(string s1, string s2)
{
	if (s1.size() == s2.size())
	{
		int i = 0;
		while (1)
		{
			if (i == s1.size())
			{
				return s1 < s2;
			}
			if (s1[i] != s2[i])
			{
				return s1[i] < s2[i];
			}
			i++;
		}
	}
	return s1.size() < s2.size();
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test;
	cin >> test;
	vector<string>v;
	for (int t = 0; t < test; t++)
	{
		string s;
		cin >> s;
		v.push_back(s);
	}
	sort(v.begin(), v.end(), compare);
	v.erase(unique(v.begin(), v.end()),v.end());
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << '\n';
	}
	return 0;
}