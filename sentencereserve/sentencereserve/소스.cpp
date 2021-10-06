#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
	int test;
	cin >> test;
	cin.ignore();
	for (int t = 0; t < test; t++)
	{
		string s;
		getline(cin, s);
		istringstream ss(s);
		string stringbuffer;
		vector<string>vec;
		while (getline(ss, stringbuffer, ' '))
			vec.push_back(stringbuffer);
		for (int i = 0; i < vec.size(); i++)
		{
			for (int j = vec[i].length() - 1; j >= 0; j--)
				cout << vec[i][j];
			cout << ' ';
		}
	}
	return 0;
}