#include <iostream>
#include <unordered_set>
#include <set>
#include <string>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	unordered_set<string>set1;
	string s;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		set1.insert(s);
	}
	set<string>set2;
	for (int i = 0; i < m; i++)
	{
		cin >> s;
		if (set1.count(s))
			set2.insert(s);
	}
	cout << set2.size() << '\n';
	for (auto it = set2.begin(); it != set2.end(); it++)
		cout << *it << '\n';

	return 0;
}