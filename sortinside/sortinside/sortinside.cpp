#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	vector<char>v;
	while (1)
	{
		char c;
		c = getchar();
		if (c == '\n') break;
		v.push_back(c);
	}
	sort(v.begin(), v.end(), greater<char>());
	for (int i = 0; i < v.size(); i++)
		cout << v[i];

	return 0;
}