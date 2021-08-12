#include <iostream>
#define HEAP_LEN 100001
struct Heap
{
	int heap[100001];
	int numOfData;
};
void Init(Heap* hp)
{
	hp->numOfData = 0;
}
int GetLIdx(Heap* hp, int parent)
{
	return parent * 2;
}
int GetRIdx(Heap* hp, int parent)
{
	return parent * 2 + 1;
}
int GetPIdx(Heap* hp, int child)
{
	return child / 2;
}
void Show(Heap* hp)
{
	for (int i = 1; i <= hp->numOfData; i++)
		std::cout << hp->heap[i] << ' ';
}
void Insert(Heap* hp, int data)
{
	int idx = hp->numOfData + 1;
	while (idx != 1)
	{
		if (hp->heap[GetPIdx(hp, idx)] <= data) break;
		hp->heap[idx] = hp->heap[GetPIdx(hp, idx)];
		idx = GetPIdx(hp, idx);
	}
	hp->heap[idx] = data;
	hp->numOfData++;
}
int Delete(Heap* hp)
{
	if (hp->numOfData == 0) return 0;
	int idx = 1;
	int rdata = hp->heap[idx];
	int data = hp->heap[hp->numOfData];
	hp->numOfData--;
	while (1)
	{
		if (GetLIdx(hp, idx) > hp->numOfData) break;
		else if (GetLIdx(hp, idx) == hp->numOfData) {
			if (data <= hp->heap[GetLIdx(hp, idx)]) break;
			else {
				hp->heap[idx] = hp->heap[GetLIdx(hp, idx)];
				idx = GetLIdx(hp, idx);
			}
		}
		else if (GetRIdx(hp, idx) <= hp->numOfData) {
			int pr = hp->heap[GetLIdx(hp, idx)] <= hp->heap[GetRIdx(hp, idx)] ? GetLIdx(hp, idx) : GetRIdx(hp, idx);
			if (hp->heap[pr] >= data) break;
			else {
				hp->heap[idx] = hp->heap[pr];
				idx = pr;
			}
		}
	}
	hp->heap[idx] = data;
	return rdata;
}
int main()
{
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test;
	cin >> test;
	Heap h;
	Init(&h);
	for (int t = 0; t < test; t++) {
		int x;
		cin >> x;
		switch (x)
		{
		case -1:
			Show(&h);
			break;
		case 0:
			cout << Delete(&h) << '\n';
			break;
		default:
			Insert(&h, x);
			break;
		}
	}
	return 0;
}