#include <iostream>
#include <stack>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	stack<pair<int, int>> stack;
	int n;
	cin >> n;
	int i = 1;
	while (i <= n) {
		int height;
		cin >> height;
		
		while (!stack.empty()&&(stack.top().first < height)) {
			stack.pop();
		}

		if (stack.empty()) {
			cout << '0' << ' ';
			stack.push(make_pair(height, i));
		}
		else {
			cout << stack.top().second << ' ';
			stack.push(make_pair(height, i));
		}
		i++;
	}
	return 0;
}