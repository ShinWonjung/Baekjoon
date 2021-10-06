#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	int test;
	cin >> str >> test;
	int cur = str.length();
	for (int t = 0; t < test; t++)
	{
		char c;
		cin >> c;
		switch (c)
		{
		case 'L':
			if (cur == 0) break;
			cur--;
			break;
		case 'D':
			if (cur == str.length()) break;
			cur++;
			break;
		case 'B':
			if (cur == 0) break;
			cur--;
			str.erase(cur, 1);
			break;
		case 'P':
			string _c;
			cin >> _c;
			str.insert(cur, _c);
			cur++;
			break;
		}
	}
	cout << str;
	return 0;
}