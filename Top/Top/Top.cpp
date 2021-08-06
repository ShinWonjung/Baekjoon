#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	int* result = new int[n] {0};
	int top = 0, _top = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] > top) {
			top = arr[i];
			_top = i;
		}
		else if (arr[i] == top) {
			result[i] = _top;
			top = arr[i];
			_top = i;
		}
		else {
			for (int j = i - 1; j >= _top; j--) {
				if (arr[i] < arr[j]) {
					result[i] = j + 1;
					break;
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (result[i] != 0) cout << result[i] << ' ';
		else cout << 0 << ' ';
	}
	delete[] arr;
	delete[] result;
	return 0;
}