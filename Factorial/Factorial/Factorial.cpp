#include <iostream>
using namespace std;

int factorial(int n)
{
	if (n == 1) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	if (n != 0)
		cout << factorial(n);
	else cout << 1;

	return 0;
}