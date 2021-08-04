#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int result = i;
		int num = i;
		while (1) {
			if (num / 1 == 0) break;
			result += num % 10;
			num /= 10;
		}
		if (result == n) {
			cout << i;
			return 0;
		}
	}
	cout << '0';
	return 0;
}