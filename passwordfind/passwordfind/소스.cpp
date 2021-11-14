#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	string s1, s2;
	cin >> n >> m;
	unordered_map<string, string>map;
	for (int i = 0; i < n; i++)
	{
		cin >> s1 >> s2;
		map[s1] = s2;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> s1;
		cout << map[s1] << '\n';
	}
	return 0;
}