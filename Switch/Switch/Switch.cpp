#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int stu;
	cin >> stu;
	int* mw = new int[stu];
	int* su = new int[stu];
	for (int i = 0; i < stu; i++) cin >> mw[i] >> su[i];
	for (int t = 0; t < stu; t++) {
		
		//남학생
		if (mw[t] == 1) {
			for (int i = 0; i < n; i++) {
				if ((i + 1) % su[t] == 0) {
					if (arr[i] == 0) arr[i] = 1;
					else arr[i] = 0;
				}
			}
		}
		//여학생
		else {
			int i = 1;
			if (arr[su[t] - 1] == 0) arr[su[t] - 1] = 1;
			else arr[su[t] - 1] = 0;
			while (1) {
				if (arr[su[t] - 1 - i] == arr[su[t] - 1 + i]) {
					if (arr[su[t] - 1 - i] == 1) {
						arr[su[t] - 1 - i] = 0;
						arr[su[t] - 1 + i] = 0;
					}
					else {
						arr[su[t] - 1 - i] = 1;
						arr[su[t] - 1 + i] = 1;
					}
					i++;
				}
				else break;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << arr[i - 1] << ' ';
		if (i % 20 == 0) cout << "\n";
	}
	delete[] arr;
	delete[] mw;
	delete[] su;
	return 0;
}