#include <iostream>
#include <string>
#include <list>

using namespace std;

int main()
{
	string str;
	int test;
	cin >> str >> test;
	list<char>list(str.begin(), str.end());
	auto cur = list.end();
	for (int t = 0; t < test; t++)
	{
		char c;
		cin >> c;
		switch (c)
		{
		case 'L':
			if (cur == list.begin()) break;
			cur--;
			break;
		case 'D':
			if (cur == list.end()) break;
			cur++;
			break;
		case 'B':
			if (cur == list.begin()) break;
			cur = list.erase(--cur);
			break;
		case 'P':
			char _c;
			cin >> _c;
			list.insert(cur, _c);
			break;
		}
	}
	for (auto it = list.begin(); it != list.end(); it++)
		cout << *it;
	return 0;
}