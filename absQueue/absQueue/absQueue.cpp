#include <iostream>
#include <queue>
#include <cmath>
using namespace std;
struct compare
{
	bool operator()(int a, int b)
	{
		if(abs(a) > abs(b)) return true;
		else if (abs(a) == abs(b)) {
			if (a > b) return true;
			else return false;
		}
		else return false;
	}
};
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test;
	cin >> test;
	priority_queue<int,vector<int>,compare>q;
	for (int t = 0; t < test; t++) {
		int x;
		cin >> x;
		if (x == 0) {
			if (q.empty()) cout << "0\n";
			else {
				cout << q.top() << '\n';
				q.pop();
			}
		}
		else q.push(x);
	}
	return 0;
}