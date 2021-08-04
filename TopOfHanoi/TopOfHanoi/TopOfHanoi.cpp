#include <iostream>
#include <cmath>
using namespace std;

void h(int n, int start, int target, int temp)
{
	if (n == 0) {
		return;
	}
	else {
		h(n - 1, start, temp, target);
		//h(n, start, target, temp);
		cout << start << ' ' << target << "\n";
		h(n - 1, temp, target, start);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	cout << (int)(pow(2, n) - 1) << "\n";
	h(n, 1, 3, 2);
	return 0;
}