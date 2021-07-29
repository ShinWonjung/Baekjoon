#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int result = 0;
	while (1) {
		if (n % 5 == 0) {
			result += (n / 5);
			cout << result;
			return 0;
		}
		if (n < 3) break;
		n -= 3;
		result++;
	}
	cout << -1;
	return 0;
}