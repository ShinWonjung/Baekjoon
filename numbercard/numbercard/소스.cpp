#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int card;
	cin >> card;
	map<int, int>map;
	for (int i = 0; i < card; i++)
	{
		int n;
		cin >> n;
		if (map.count(n))
			map[n]++;
		else
			map[n] = 1;
	}
	cin >> card;
	vector<int>answer;
	for (int i = 0; i < card; i++)
	{
		int n;
		cin >> n;
		if (map.count(n))
			answer.push_back(map[n]);
		else
			answer.push_back(0);
	}
	for (int i : answer)
		cout << i << ' ';

	return 0;
}