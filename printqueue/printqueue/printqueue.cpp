#include <iostream>
#include <queue>
using namespace std;
int main()
{
	int test;
	cin >> test;
	for (int t = 0; t < test; t++) {
		int n, m;
		cin >> n >> m;
		queue<pair<int,int>>q1;
		for (int i = 0; i < n; i++) {
			int su;
			cin >> su;
			q1.push(make_pair(su, i));
		}
		queue<pair<int, int>>q2;
		int i = 9;
		while(!q1.empty()){
			int size = q1.size();
			for (int j = 0; j < size; j++) {
				if (q1.front().first == i) {
					q2.push(q1.front());
					q1.pop();
					j = -1;
					size--;
				}
				else {
					q1.push(q1.front());
					q1.pop();
				}
			}
			i--;
		}
		i = 1;
		while (!q2.empty()) {
			if (q2.front().second == m) {
				cout << i << '\n';
				break;
			}
			q2.pop();
			i++;
		}
	}
	return 0;
}