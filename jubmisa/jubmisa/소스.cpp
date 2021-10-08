#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;
	int len = s.length();
	vector<string>vec;
	for (int i = 0; i < s.length(); i++)
	{
		vec.push_back(s.substr(i, len));
	}
	sort(vec.begin(), vec.end());
	for (auto i : vec)
		cout << i << '\n';
	return 0;
}