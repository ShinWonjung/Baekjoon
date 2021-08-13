#include <iostream>
#include <queue>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int size;
	cin >> size;
	priority_queue<int, vector<int>, greater<int>>q;
	for (int i = 0; i < size; i++)
	{
		int n;
		cin >> n;
		q.push(n);
	}
	while (!q.empty())
	{
		cout << q.top() << '\n';
		q.pop();
	}
	return 0;
}