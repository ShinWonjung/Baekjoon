#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	char** arr = new char*[n];
	for (int i = 0; i < n; i++) arr[i] = new char[m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j+=1) cin >> arr[i][j];
	}

	int min = 64;
	for (int t = 0; t < 2; t++) {
		for (int rsize = 0; rsize <= n - 8; rsize++) {
			for (int csize = 0; csize <= m - 8; csize++) {
				int result = 0, eresult = 0;
				for (int i = rsize; i < rsize + 8; i++) {
					for (int j = csize; j < csize + 8; j++) {

						if (arr[rsize][csize] == 'W')
						{
							if (((i - rsize) % 2 == 0 && (j - csize) % 2 == 0) || ((i - rsize) % 2 == 1 && (j - csize) % 2 == 1)) {
								if (arr[i][j] == 'B') result++;
								else eresult++;
							}
							if (((i - rsize) % 2 == 0 && (j - csize) % 2 == 1) || ((i - rsize) % 2 == 1 && (j - csize) % 2 == 0)) {
								if (arr[i][j] == 'W') result++;
								else eresult++;
							}
						}
						if (arr[rsize][csize] == 'B')
						{
							if (((i - rsize) % 2 == 0 && (j - csize) % 2 == 1) || ((i - rsize) % 2 == 1 && (j - csize) % 2 == 0)) {
								if (arr[i][j] == 'B') result++;
								else eresult++;
							}
							if (((i - rsize) % 2 == 0 && (j - csize) % 2 == 0) || ((i - rsize) % 2 == 1 && (j - csize) % 2 == 1)) {
								if (arr[i][j] == 'W') result++;
								else eresult++;
							}
						}


					}
				}
				result = result < eresult ? result : eresult;
				if (min > result) min = result;
			}
		}
	}
	cout << min;

	for (int i = 0; i < n; i++) delete[] arr[i];
	delete[] arr;
	return 0;
}
