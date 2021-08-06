#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (n = 1; n < 1000; n++) {
		int result = 666;
		int plus = 1;
		int num = 0;
		int i = 0;
		while (i < n) {
			if (num % 10 == 6) {
				result = 666 + 1000 * num;
				result -= 6;
				i++;
				for (int j = 1; j < 10; j++) {
					if (i == n) goto HERE;
					result++;
					i++;
				}
				num++;
			}
			else {
				plus = 1000 * num++;
				result = 666 + plus;
				i++;
			}
		}
	HERE:
		cout << result << "\n";
	}
	return 0;
}