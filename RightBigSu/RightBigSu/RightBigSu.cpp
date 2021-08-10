#include <iostream>
#include <stack>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	int* result = new int[n];
	stack<pair<int, int>> stack;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (stack.empty()) {
			stack.push(make_pair(a,i));
		}
		else {
			if (stack.top().first >= a) {
				stack.push(make_pair(a,i));
			}
			else {
				while (1) {
					result[stack.top().second] = a;
					stack.pop();
					if (stack.empty()) break;
					if (stack.top().first >= a) break;
				}
				stack.push(make_pair(a,i));
			}
		}
	}
	while (!stack.empty()) {
		result[stack.top().second] = -1;
		stack.pop();
	}
	for (int i = 0; i < n; i++) cout << result[i] << ' ';
	delete[] result;
	return 0;
}