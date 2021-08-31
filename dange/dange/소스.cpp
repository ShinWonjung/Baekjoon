#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int _size;
vector<string>vec;
vector<int>result;
vector<int>dplus{ -1,1 };

void dfs(int i, int j)
{
	result.back()++;
	vec[i][j] = '0';
	for (int n = 0; n < dplus.size(); n++)
	{
		if (i + dplus[n] < _size && i + dplus[n] > -1 && vec[i + dplus[n]][j] == '1')
			dfs(i + dplus[n], j);
		if (j + dplus[n] < _size && j + dplus[n] > -1 && vec[i][j + dplus[n]] == '1')
			dfs(i, j + dplus[n]);
	}
}
int main()
{
	cin >> _size;
	for (int i = 0; i < _size; i++)
	{
		string s;
		cin >> s;
		vec.push_back(s);
	}
	for (int i = 0; i < _size; i++)
	{
		for (int j = 0; j < _size; j++)
		{
			if (vec[i][j] == '1')
			{
				result.push_back(0);
				dfs(i, j);
			}
		}
	}
	sort(result.begin(), result.end());
	cout << result.size() << '\n';
	for (auto r : result)
		cout << r << '\n';

	return 0;
}