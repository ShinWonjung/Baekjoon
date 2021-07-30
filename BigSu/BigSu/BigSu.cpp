#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;

	string& big = a.length() >= b.length() ? a : b;
	string& small = b.length() <= a.length() ? b : a;

	vector<char> _big, _small;
	int minus = big.length() - small.length();

	for (int i = 0; i < big.length(); i++) {
		_big.push_back(big[i]);
		if (i < minus) _small.push_back('0');
		else _small.push_back(small[i - minus]);
	}

	int up = 0;
	vector<char> _result;
	for (int i = 0;; i++) {
		int _big_i = _big.back() - '0';
		int _small_i = _small.back() - '0';
		int result = _big_i + _small_i + up;
		up = result / 10;
		_result.push_back((result % 10) + '0');

		_big.pop_back();
		_small.pop_back();

		if (_big.empty()) {
			if (up == 1) _result.push_back('1');
			break;
		}
	}
	for (int i = _result.size() - 1; i >= 0; i--) cout << _result[i];
	
}