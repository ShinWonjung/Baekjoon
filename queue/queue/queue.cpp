#include <iostream>
#include <string>
#define TRUE 1
#define FALSE 0
struct Node
{
	int data;
	Node* next;
};
struct Queue
{
	Node* front;
	Node* back;
	int numOf;
};
void Init(Queue* pq)
{
	pq->front = NULL;
	pq->back = NULL;
	pq->numOf = 0;
}
int Empty(Queue* pq)
{
	if (pq->front == NULL) return TRUE;
	else return FALSE;
}
int Front(Queue* pq)
{
	if (Empty(pq)) return -1;
	else return pq->front->data;
}
int Back(Queue* pq)
{
	if (Empty(pq)) return -1;
	else return pq->back->data;
}
void Push(Queue* pq, int data)
{
	Node* node = new Node;
	node->data = data;
	if (Empty(pq)) {
		pq->front = node;
		pq->back = node;
		pq->numOf++;
		return;
	}
	node->next = NULL;
	pq->back->next = node;
	pq->back = node;
	pq->numOf++;
}
int Pop(Queue* pq)
{
	if (Empty(pq)) return -1;
	Node* del = pq->front;
	int delData = pq->front->data;
	pq->front = pq->front->next;
	pq->numOf--;
	delete del;
	return delData;
}
int Size(Queue* pq)
{
	return pq->numOf;
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	Queue q;
	Init(&q);
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::string s;
		std::cin >> s;
		if (s == "push") {
			int a;
			std::cin >> a;
			Push(&q, a);
		}
		else if (s == "pop") {
			std::cout << Pop(&q) << '\n';
		}
		else if (s == "empty") {
			std::cout << Empty(&q) << '\n';
		}
		else if (s == "size") {
			std::cout << Size(&q) << '\n';
		}
		else if (s == "front") {
			std::cout << Front(&q) << '\n';
		}
		else if (s == "back") {
			std::cout << Back(&q) << '\n';
		}
	}
	return 0;
}