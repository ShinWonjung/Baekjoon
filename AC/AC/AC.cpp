#include <iostream>
#include <deque>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test;
	cin >> test;
	for (int t = 0; t < test; t++) {
		string p;
		int size;
		cin >> p >> size;
		deque<int>dq;
		/*int Ri = 0, Di = 0;
		for (int i = 0; i < p.size(); i++) {
			if (p[i] == 'R') Ri++;
			else Di++;
		}*/
		string arr;
		cin >> arr;
		for (int i = 0; i < arr.size(); i++) {
			if (isdigit(arr[i])) {
				int su = arr[i] - '0';
				while (1) {
					if (isdigit(arr[i + 1])) {
						su = su * 10 + (arr[i + 1] - '0');
						i++;
					}
					else break;
				}
				dq.push_back(su);
			}
		}

		int Ri = 0;
		bool b = true;
		for (int i = 0; i < p.size(); i++) {
			if (p[i] == 'R') Ri++;
			if (p[i] == 'D') {
				if (dq.empty()) {
					b = false;
					break;
				}
				if (Ri % 2 == 0) dq.pop_front();
				else dq.pop_back();
			}
		}

		if (b == false) {
			cout << "error\n";
			continue;
		}
		if (!dq.empty()) {
			cout << '[';
			while (dq.size() > 1) {
				if (Ri % 2 == 0) {
					cout << dq.front() << ',';
					dq.pop_front();
				}
				else {
					cout << dq.back() << ',';
					dq.pop_back();
				}
			}
			cout << dq.front() << "]\n";
		}
		else cout << "[]\n";
	}
	return 0;
}