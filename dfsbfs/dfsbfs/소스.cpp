#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

bool check[10001];

void DFS(int n, const vector<int>* vec)
{
	check[n] = true;
	cout << n << ' ';

	for (int i = 0; i < vec[n].size(); i++)
	{
		int next = vec[n][i];
		if (check[next] == false)
			DFS(next, vec);
	}
}

void BFS(int n, const vector<int>* vec)
{
	check[n] = false;
	queue<int>q;
	q.push(n);
	while (!q.empty())
	{
		int node = q.front();
		cout << q.front() << ' ';
		q.pop();
		for (int i = 0; i < vec[node].size(); i++)
		{
			int next = vec[node][i];
			if (check[next])
			{
				check[next] = false;
				q.push(next);
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, v;
	cin >> n >> m >> v;

	vector<int>* vec = new vector<int>[n + 1];

	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}

	for (int i = 0; i <= n; i++)
		sort(vec[i].begin(), vec[i].end());

	DFS(v, vec);
	cout << '\n';
	BFS(v, vec);

	delete[] vec;
	return 0;
}