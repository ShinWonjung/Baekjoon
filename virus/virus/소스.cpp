#include <iostream>
#include <vector>
using namespace std;

bool check[101];
int cnt;

void dfs(int n, vector<int>* arr)
{
	check[n] = true;
	cnt++;
	for (int i = 0; i < arr[n].size(); i++)
	{
		int next = arr[n][i];
		if (check[next] == false)
			dfs(next, arr);
	}
}

int main()
{
	cnt = -1;
	int com, line;
	cin >> com >> line;
	vector<int>* arr = new vector<int>[com + 1];
	for (int i = 0; i < line; i++)
	{
		int x, y;
		cin >> x >> y;
		arr[x].push_back(y);
		arr[y].push_back(x);
	}
	dfs(1, arr);

	cout << cnt;

	delete[] arr;
	return 0;
}