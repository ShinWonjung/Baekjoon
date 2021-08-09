#include <iostream>
#include <stack>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		stack<char> stack;
		string c;
		cin >> c;
		for (int i = 0; i < c.size(); i++) {
			if (!stack.empty() && stack.top() == '(' && c[i] == ')') {
				stack.pop();
			}
			else stack.push(c[i]);
		}
		if (stack.empty()) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}