#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	while (1)
	{
		//char last;
		//last = getchar();
		//if (last == '.') break;
		string s;
		getline(cin, s);
		if (s == ".") break;
		//s = last + s;
		stack<char>stack;
		bool boo = true;
		for (int i = 0; i < s.size(); i++) {
			//if (s[i] == '.') break;
			if (s[i] == '[') {
				stack.push(s[i]);
			}
			else if (s[i] == '(') {
				stack.push(s[i]);
			}
			else if (s[i] == ']') {
				if (!stack.empty() && stack.top() == '[') stack.pop();
				else {
					boo = false;
					break;
				}
			}
			else if (s[i] == ')') {
				if (!stack.empty() && stack.top() == '(') stack.pop();
				else {
					boo = false;
					break;
				}
			}
		}
		if (boo == false) {
			cout << "no\n";
			continue;
		}
		if (stack.empty()) {
			cout << "yes\n";
		}
		else {
			cout << "no\n";
		}
	}

	return 0;
}