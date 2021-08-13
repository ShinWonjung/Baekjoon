#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;
int Avg(double sum, int n)
{
	return round(sum / n);
}
int Mid(vector<int>v)
{
	if (v.size() == 1) return v[0];
	else return v[v.size() / 2];
}
int Freq(vector<int>v)
{
	queue<int>q;
	int freq;
	int rfreq = 0, rnum = 0;
	for (int i = 0; i < v.size(); )
	{
		int num = v[i];
		freq = 0;
		while (i<v.size() && num == v[i])
		{
			freq++;
			i++;
		}
		if (freq > rfreq)
		{
			rfreq = freq;
			while (!q.empty()) q.pop();
			q.push(num);
		}
		else if (freq == rfreq) q.push(num);
	}
	if (q.size() == 1)
		return q.front();
	else
	{
		q.pop();
		return q.front();
	}
}
int Minus(vector<int>v)
{
	return v[v.size() - 1] - v[0];
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	priority_queue<int, vector<int>, greater<int>>q;
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		q.push(num);
		sum += num;
	}
	vector<int>v;
	while (!q.empty())
	{
		v.push_back(q.top());
		q.pop();
	}

	cout << Avg(sum, n) << '\n' << Mid(v) << '\n' << Freq(v) << '\n' << Minus(v);
	return 0;
}