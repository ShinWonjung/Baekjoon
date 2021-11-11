#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	unordered_set<int>set;
	int test, n, m, num;
	cin >> test;
	for (int t = 0; t < test; t++)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> num;
			set.insert(num);
		}
		cin >> m;
		for (int i = 0; i < m; i++)
		{
			cin >> num;
			if (!set.count(num))
				cout << "0\n";
			else
				cout << "1\n";
		}
		set.clear();
	}
	return 0;
}