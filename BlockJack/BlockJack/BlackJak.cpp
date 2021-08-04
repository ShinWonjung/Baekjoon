#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int* arr = new int[n];
	int max = 0;
	for (int i = 0; i < n; i++) cin >> arr[i];
	for (int i = 0; i <= n - 3; i++) {
		for (int j = i + 1; j <= n - 2; j++) {
			for (int g = j + 1; g <= n - 1; g++) {
				int sum = arr[i] + arr[j] + arr[g];
				if (sum <= m && sum > max) max = sum;
			}
		}
	}
	cout << max;
	delete[] arr;
	return 0;
}