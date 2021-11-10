#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, p, score, num;
	cin >> n >> score >> p;
	vector<int>vec;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		vec.push_back(num);
	}
	sort(vec.begin(), vec.end(), greater<int>());
	if (vec.size() >= p && vec.back() >= score)
	{
		cout << "-1";
		return 0;
	}
	int rank = 1;
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i] > score)
			rank++;
		else
			break;
	}
	cout << rank;
	return 0;
}