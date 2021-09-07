#include <iostream>
using namespace std;
int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int xanswer = w - x < x ? w - x :x ;
	int yanswer = h - y < y ? h - y : y;
	int answer = xanswer < yanswer ? xanswer : yanswer;
	cout << answer;
	return 0;
}