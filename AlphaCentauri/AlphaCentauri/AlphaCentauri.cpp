#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int* i = new int[t] {0, };
	for (int time = 0; time < t; time++) {
		int x, y, result = 1;
		cin >> x >> y;
		double circle = 0.5;
		while (1) {
			circle += 0.5;
			i[time]++;
			if (y - x < result) break;
			for (int j = 0; j < (int)circle; j++) {
				if (y - x >= result) result ++;
				else break;
			}
		}
	}
	for (int time = 0; time < t; time++) cout << --i[time] << "\n";
	delete[] i;
	return 0;
}