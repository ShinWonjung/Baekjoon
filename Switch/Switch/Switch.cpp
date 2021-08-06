#include <iostream>
using namespace std;
int arr[100];
int main()
{
	int n;
	cin >> n;
	//int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	//arr[-1] = -1;
	//arr[n] = -1;
	int stu;
	cin >> stu;
	int** mw = new int*[stu];
	//int* su = new int[stu];
	for (int i = 0; i < stu; i++) {
		mw[i] = new int[2];
		cin >> mw[i][0] >> mw[i][1];
	}
	for (int t = 0; t < stu; t++) {
		
		//남학생
		if (mw[t][0] == 1) {
			for (int i = 0; i < n; i++) {
				if ((i + 1) % mw[t][1] == 0) {
					if (arr[i] == 0) arr[i] = 1;
					else arr[i] = 0;
				}
			}
		}
		//여학생
		else {
			int i = 1;
			if (arr[mw[t][1] - 1] == 0) arr[mw[t][1] - 1] = 1;
			else arr[mw[t][1] - 1] = 0;
			while (1) {
				if (mw[t][1] - 1 - i < 0 || mw[t][1] - 1 + i >= n) break;
				if (arr[mw[t][1] - 1 - i] == arr[mw[t][1] - 1 + i]) {
					if (arr[mw[t][1] - 1 - i] == 1) {
						arr[mw[t][1] - 1 - i] = 0;
						arr[mw[t][1] - 1 + i] = 0;
					}
					else {
						arr[mw[t][1] - 1 - i] = 1;
						arr[mw[t][1] - 1 + i] = 1;
					}
					i++;
				}
				else break;
			}
		}
	}
	for (int i = 0; i < stu; i++) delete[] mw[i];
	delete[] mw;
	for (int i = 1; i <= n; i++) {
		cout << arr[i - 1] << ' ';
		if (i % 20 == 0) cout << "\n";
	}
	//delete[] arr;
	return 0;
}