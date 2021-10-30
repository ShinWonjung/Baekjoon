#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int>a;
	vector<int>b;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		a.push_back(num);
	}
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		b.push_back(num);
	}
	int min = 10000;
	
	sort(a.begin(), a.end());
	sort(b.begin(), b.end(), greater<int>());

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i] * b[i];
	}
	
	cout << sum;
	return 0;
}