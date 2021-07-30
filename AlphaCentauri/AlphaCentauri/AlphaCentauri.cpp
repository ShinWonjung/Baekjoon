#include <iostream>
using namespace std;

int main()
{
	int t, x, y;
	cin >> t;
	int* cnt = new int[t];
	for (int c = 0; c < t; c++) {
		cin >> x >> y;
		int move = y - x - 1;
		int _move = move / 2;
		int i = 1, result = 0;;
		cnt[c] = 0;
		while (1) {
			if (result >= move) break;
			result += i;
			if (result <= _move) i++;
			else if (result > _move) {
				if (move - result > 3) i--;
			}
			cnt[c]++;
		}
	}
	for(int i=0;i<t;i++) cout << ++cnt[i] << "\n";
}