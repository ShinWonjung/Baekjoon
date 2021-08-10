#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	stack<int> stack;
	string s;
	int n;
	cin >> n;
	int i = 1;
	int t = 0;
	while (t < n)
	{
		int num;
		cin >> num;
		while (i <= num) {
			stack.push(i);
			s += "+\n";
			i++;
		}
		if (stack.top() == num) {
			stack.pop();
			s += "-\n";
		}
		t++;
	}
	if (stack.empty()) cout << s;
	else cout << "NO";

	return 0;
}