#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int* cnt = new int[t] {0, };
	for (int i = 0; i < t; i++) {
		int x, y, n;
		cin >> x >> y;
		if ((y - x) % 2 == 1) n = (y - x) + 1;
		else n = (y - x);
		int sum = 0;
		int result = 0;
		while (1) {
			sum++;
			result += sum;
			if (n / 2 > result) cnt[i]++;
			else break;
		}
		cnt[i] *= 2;
		if (n < (result * 2 - cnt[i])) cnt[i]--;
	}

	for (int i = 0; i < t; i++) cout << cnt[i] << "\n";
	delete[] cnt;
	return 0;
}