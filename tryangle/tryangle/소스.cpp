#include <iostream>

using namespace std;

int main()
{
	while (1)
	{
		int x, y, z;
		cin >> x >> y >> z;
		if (x == 0 && y == 0 && z == 0) break;
		x *= x;
		y *= y;
		z *= z;
		if (x + y == z || x + z == y || y + z == x)
			cout << "right" << '\n';
		else
			cout << "wrong" << '\n';
	}
	return 0;
}