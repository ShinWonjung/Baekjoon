#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int test, s;
	cin >> test >> s;
	vector<int>pos;
	for (int i = 0; i < test; i++)
	{
		int a;
		cin >> a;
		pos.push_back(a);
	}
	vector<int>_pos;
	for (int i = 0; i < test; i++)
	{
		_pos.push_back(abs(pos[i] - s));
	}
	sort(_pos.begin(), _pos.end(), greater<int>());
	int n = 1;
	while (1)
	{
		for (int i = 0; i < test; i++)
		{
			if(_pos[i]/n)
		}
		n++;
	}
}