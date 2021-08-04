#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int** arr = new int* [n];
	for (int i = 0; i < n; i++) arr[i] = new int[3]{ 0, };
	for (int i = 0; i < n; i++) cin >> arr[i][0] >> arr[i][1];
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1]) arr[i][2]++;
		}
		for (int j = i - 1; j >= 0; j--) {
			if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1]) arr[i][2]++;
		}
	}
	for (int i = 0; i < n; i++) cout << ++arr[i][2] << ' ';
	for (int i = 0; i < n; i++) delete[] arr[i];
	delete[] arr;
	return 0;
}