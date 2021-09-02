#include <vector>
#include <queue>
#include <iostream>

using namespace std;

const int INF = 6000000001;
vector<pair<int, int>> vec[20001];
int d[20001];

int main()
{
	int v, e;
	cin >> v >> e;
	int k;
	cin >> k;
	for (int i = 0; i < e; i++)
	{
		int u, v, m;
		cin >> u >> v >> m;
		vec[u].push_back(make_pair(m, v));
	}
	fill(d, d + v + 1, INF);

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
	d[k] = 0;
	pq.push(make_pair(d[k], k));
	while (!pq.empty())
	{
		int idx = pq.top().second;
		int dist = pq.top().first;
		pq.pop();
		if (d[idx] != dist) continue;
		for (auto nxt : vec[idx])
		{
			int cost = nxt.first;
			int nidx = nxt.second;
			if (d[nidx] > dist + cost)
			{
				d[nidx] = dist + cost;
				pq.push({ d[nidx],nidx });
			}
		}
	}
	for (int i = 1; i <= v; i++)
	{
		if (d[i] == INF) cout << "INF" << '\n';
		else
			cout << d[i] << '\n';
	}

	return 0;
}