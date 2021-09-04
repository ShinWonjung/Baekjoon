#include <vector>
#include <string>
#include <iostream>
#include <queue>

int n, m;
int check[101][101];

using namespace std;
bool rowsize(int check)
{
	if (check < 0 || check >= n)
		return false;
	else
		return true;
}
bool colsize(int check)
{
	if (check < 0 || check >= m)
		return false;
	else return true;
}
int main()
{
	cin >> n >> m;
	vector<string>v;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		v.push_back(s);
	}
	
	queue<pair<int,int>>q;
	int b[] = { -1,1 };
	q.push(make_pair(0, 0));
	v[0][0] = '0';
	check[0][0] = 1;
	while (!q.empty())
	{
		int row = q.front().first;
		int col = q.front().second;
		q.pop();
		if (row == n - 1 && col == m - 1) break;
		for (int i = 0; i < 2; i++)
		{
			if (rowsize(row + b[i]) && v[row + b[i]][col] == '1')
			{
				q.push(make_pair(row + b[i], col));
				v[row + b[i]][col] = '0';
				check[row + b[i]][col] = check[row][col] + 1;
			}
			if (colsize(col + b[i]) && v[row][col + b[i]] == '1')
			{
				q.push(make_pair(row, col + b[i]));
				v[row][col + b[i]] = '0';
				check[row][col + b[i]] = check[row][col] + 1;
			}
		}
	}
	cout << check[n - 1][m - 1];
	return 0;
}