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
	/*if (big.length() != small.length()) {
		for (int i = small.length(); i < big.length(); i++) {
			_small.push_back(0);
		}
	}*/
	int minus = big.length() - small.length();
	for (int i = 0; i < big.length(); i++) {
		_big.push_back(big[i]);
		if (i < minus) _small.push_back('0');
		else _small.push_back(small[i - minus]);
	}
	for (int i = 0; i < _big.size(); i++)cout << _big[i];
	cout << "\n" << _big.size() << "\n" << _small.size() << "\n";
	for (int i = 0; i < _small.size(); i++)cout << _small[i];
	
}