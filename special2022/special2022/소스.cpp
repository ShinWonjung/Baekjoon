#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int n, num, d, g, r;
	string s, answer;
	vector<bool>vec(5, 0);
	cin >> num >> d;
HERE:
	g = num;
	n = num;
	while (g >= d)
	{
		g = n / d;
		r = n % d;
		s += to_string(r);
		vec[r] = 1;
		n = g;
	}
	s += to_string(g);
	vec[g] = 1;
	bool flag = true;
	for (int i = 0; i < 5; i++)
	{
		if (vec[i] == 0)
		{
			flag = false;
			break;
		}
	}
	if (flag)
	{
		num++;
		vec.assign(5, 0);
		s.clear();
		goto HERE;
	}
	vec.assign(5, 0);
	reverse(s.begin(), s.end());
	for (auto a : s)
	{
		if (vec[a - '0'] == 0)
		{
			vec[a - '0'] = 1;
			answer += a;
		}
		else
		{
			for (int i = a - '0'; i < 5; i++)
			{
				if (!vec[i])
				{
					vec[i] = 1;
					answer += to_string(i);
					break;
				}
				if (i == 4)
				{

				}
			}
		}
	}
	cout << answer;
	return 0;
}