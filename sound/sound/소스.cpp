#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int>vec(8, 0);
	for (int i = 0; i < 8; i++)
	{
		cin >> vec[i];
	}
	if (vec[0] == 1)
	{
		for (int i = 1; i < 8; i++)
		{
			if (vec[i] != i + 1)
			{
				cout << "mixed"; return 0;
			}
		}
		cout << "ascending"; return 0;
	}
	else if (vec[0] == 8)
	{
		for (int i = 1; i < 8; i++)
		{
			if (vec[i] != 8 - i)
			{
				cout << "mixed"; return 0;
			}
		}
		cout << "descending"; return 0;
	}
	else
		cout << "mixed"; return 0;
}