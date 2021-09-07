#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int n;
	cin >> n;
	priority_queue<int, vector<int>, greater<int>>q;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		q.push(num);
	}
	int answer1 = q.top();
	int answer2 = q.top();
	q.pop();
	while (!q.empty())
	{
		answer1 += q.top();
		answer2 += answer1;
		q.pop();
	}
	cout << answer2;

	return 0;
}