#include <iostream>
#include <queue>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	queue<int>q;
	for (int i = 1; i <= n; i++) q.push(i);
	int i = 1;
	cout << '<';
	while (q.size() > 1) {
		if (i % k == 0) {
			cout << q.front() << ", ";
		}
		else {
			q.push(q.front());
		}
		q.pop();
		i++;
	}
	cout << q.front() << '>';
	return 0;
}