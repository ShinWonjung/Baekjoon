#include <iostream>
#include <vector>

using namespace std;

int lansun(vector<int>lan, int n)
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

	vector<int>lan;
	int sum = 0;
	for (int i = 0; i < k; i++)
	{
		int x;
		cin >> x;
		lan.push_back(x);
		sum += x;
	}
	int right = sum / n;
	int left = 1;
	int mid;
	while (1)
	{
		mid = (left + right) / 2;
		int num = lansun(lan, mid);

		if (num == n)
			break;
		else if (num < n)
			right = mid - 1;
		else
			left = mid + 1;
	}
	while (1)
	{
		int num = lansun(lan, --right);
		if (num == n)
			break;
	}
	cout << right;

	return 0;
}