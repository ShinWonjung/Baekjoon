#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int test;
	cin >> test;
	priority_queue<int,vector<int>,greater<int>>q;
	stack<int>s;
	int n;
	cin >> n;
	q.push(n);
	cout << n << '\n';
	for (int t = 0; t < test - 1; t++)
	{
		cin >> n;
		q.push(n);
		int size;
		if (q.size() % 2 == 1) size = q.size() / 2;
		else size = q.size() / 2 - 1;

		for (int i = 0; i < size; i++) {
			s.push(q.top());
			q.pop();
		}
		cout << q.top() << '\n';
		while (!s.empty()) {
			q.push(s.top());
			s.pop();
		}
	}
	return 0;
}