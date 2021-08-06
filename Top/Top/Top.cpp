#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	cout << 0 << ' ';
	for (int i = 1; i < n; i++) {
		int j = i - 1;
		while (1) {
			if (arr[i] < arr[j]) { cout << j + 1 << ' '; break; }
			if (j == 0) { cout << 0 << ' '; break; }
			j--;
		}
	}
	//arr[0] = 0;
	//for (int i = 0; i < n; i++) cout << arr[i] << ' ';
	delete[] arr;
	return 0;
}