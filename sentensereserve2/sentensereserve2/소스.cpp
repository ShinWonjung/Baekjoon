#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string str;
	getline(cin, str);
	vector<string>vec;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '<')
		{
			vec.push_back("");
			while (str[i] != '>')
			{
				vec.back() += str[i];
				i++;
			}
			vec.back() += '>';
		}
		else if (str[i] == ' ')
			vec.back() += ' ';
		else
		{
			vec.push_back("");
			while (i<str.size() && str[i] != ' ' && str[i] != '<')
			{
				vec.back() += str[i];
				i++;
			}
			reverse(vec.back().begin(), vec.back().end());
			if (str[i] == ' ' || str[i] == '<')
				i--;
		}
	}
	for (auto s : vec)
		cout << s;

	return 0;
}