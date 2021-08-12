#include <iostream>
using namespace std;
char arr[100][100];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test;
	int firstx = 100, firsty = 100;
	int lastx = 0, lasty = 0;
	cin >> test;
	for (int t = 0; t < test; t++) {
		int x, y;
		cin >> x >> y;
		if (x < firstx) firstx = x;
		if (y < firsty) firsty = y;
		if (x + 10 > lastx) lastx = x + 10;
		if (y + 10 > lasty) lasty = y + 10;
		for (int i = x; i < x + 10; i++) {
			for (int j = y; j < y + 10; j++) {
				arr[i][j] = '*';
			}
		}
	}
	int result = 0;
	for (int i = firstx; i < lastx; i++) {
		for (int j = firsty; j < lasty; j++) {
			if (arr[i][j] == '*') result++;
		}
	}
	cout << result;
}