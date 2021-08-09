#include <iostream>
#include <stack>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	stack<int> stack;
	int k;
	cin >> k;
	for (int i = 0; i < k; i++) {
		int n;
		cin >> n;
		if (!stack.empty() && n == 0) {
			stack.pop();
			continue;
		}
		stack.push(n);
	}
	int result = 0;
	while (!stack.empty()) {
		result += stack.top();
		stack.pop();
	}
	cout << result;
	return 0;
}