#include <iostream>
#include <queue>

using namespace std;

struct compare
{
	bool operator()(pair<int, int>p1, pair<int, int>p2)
	{
		if (p1.second != p2.second)
			return p1.second > p2.second;
		else
			return p1.first > p2.first;
	}
};

int main()
{
	int n;
	cin >> n;
	priority_queue<pair<int, int>,vector<pair<int,int>>,compare>q;
	for (int i = 0; i < n; i++)
	{
		int n1, n2;
		cin >> n1 >> n2;
		q.push(make_pair(n1, n2));
	}
	while (!q.empty())
	{
		cout << q.top().first << ' ' << q.top().second << '\n';
		q.pop();
	}
	return 0;
}
