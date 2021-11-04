#include <iostream>
#include <map>

using namespace std;

int main()
{
	int n, cls;
	cin >> n;
	map<int, int>map;
	for (int i = 0; i < n; i++)
	{
		cin >> cls;
		map[cls]++;
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> cls;
		if (!map.count(cls) || map[cls] == 0)
			ans++;
		else
			map[cls]--;
	}
	cout << ans;
	return 0;
}