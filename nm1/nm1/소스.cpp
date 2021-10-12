#include <iostream>

using namespace std;

#define MAX 10
int N, M;

int arr[MAX];
int visit[MAX + 1];

void dfs(int len)
{
	if (M == len)
	{
		for (int i = 0; i < M; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}

	for (int i = 1; i <= N; i++)
	{
		if (!visit[i])
		{
			visit[i] = true;
			arr[len] = i;
			dfs(len + 1);
			visit[i] = false;
		}
	}
}

int main()
{
	cin >> N >> M;
	dfs(0);
	return 0;
}