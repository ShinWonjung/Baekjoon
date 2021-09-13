#include <iostream>
#include <vector>

using namespace std;

int lansun(vector<int>lan, long long n)
{
	int answer = 0;
	for (int i = 0; i < lan.size(); i++)
	{
		answer += lan[i] / n;
	}
	return answer;
}
int main()
{
	int k, n;
	cin >> k >> n;

	int max = 0;
	vector<int>lan;
	for (int i = 0; i < k; i++)
	{
		int x;
		cin >> x;
		lan.push_back(x);
		if (max < x)
			max = x;
	}
	long long right = max;
	long long left = 1;
	long long mid;
	int num;
	while (left <= right)
	{
		mid = (left + right) / 2;
		num = lansun(lan, mid);

		if (num == n)
		{
			if (lansun(lan, mid + 1) != n)
				break;
			else
				left = mid + 1;
		}
		else if (num < n)
			right = mid - 1;
		else
			left = mid + 1;
	}
	while (num != n)
	{
		if (lansun(lan, mid--) >= n)
		{
			mid++;
			break;
		}
	}
	cout << mid;

	return 0;
}