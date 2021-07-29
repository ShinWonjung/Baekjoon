#include <iostream>
using namespace std;

int main()
{
	int t;
	int h, n;
	cin >> t;
	int* w = new int[t];

	for (int i = 0; i < t; i++) {
		cin >> h >> w[i] >> n;

		if (n > h * w[i]) {
			i--;
			continue;
		}

		if (n % h == 0) w[i] = h * 100;
		else w[i] = 100 * (n % h); //Ãþ

		if (n % h == 0) w[i] += n / h;
		else w[i] += (n / h + 1); //È£
	}
	for (int i = 0; i < t; i++)cout << w[i] << "\n";

	delete[] w;
	return 0;
}