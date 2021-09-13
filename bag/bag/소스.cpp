#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> n1, pair<int, int> n2)
{
	return n1.second > n2.second;
}

int main()
{
	int n, k;
	cin >> n >> k;
	vector<pair<int, int>>vec;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		vec.push_back(make_pair(x, y));
	}
	sort(vec.begin(), vec.end(), compare);

	int max = 0;
	for (int i = 0; i < vec.size() - 1; i++)
	{
		if (max < vec[i].second) max = vec[i].second;
		for (int j = i; j < vec.size(); j++)
		{
			int sum = vec[i].first;
			int value = vec[i].second;
			int cnt = 0;
			while (j + cnt == vec.size() && sum + vec[j + cnt].first <= k)
			{
				sum += vec[j + cnt].first;
				value += vec[j + cnt].second;
				cnt++;
			}
			j - cnt;
			if (max < value) max = value;
			
			if (sum == k)
			{
				break;
			}
		}
	}
	cout << max;
	return 0;
}