#include <iostream>
#include <string>
using namespace std;
struct Node
{
	int data;
	Node* prev;
	Node* next;
};
class Deque
{
	Node* front;
	Node* back;
	int numOfData;
	
public:
	void Init()
	{
		front = NULL;
		back = NULL;
		numOfData = 0;
	}
	int Empty()
	{
		if (front == NULL) return 1;
		else return 0;
	}
	int Size()
	{
		return numOfData;
	}
	void PushFront(int n)
	{
		Node* node = new Node;
		node->data = n;
		numOfData++;
		if (Empty()) {
			node->prev = NULL;
			node->next = NULL;
			front = node;
			back = node;
			return;
		}
		node->prev = NULL;
		node->next = front;
		front->prev = node;
		front = node;
	}
	void PushBack(int n)
	{
		Node* node = new Node;
		node->data = n;
		numOfData++;
		if (Empty()) {
			node->prev = NULL;
			node->next = NULL;
			front = node;
			back = node;
			return;
		}
		node->next = NULL;
		node->prev = back;
		back->next = node;
		back = node;
	}
	int PopFront()
	{
		if (Empty()) return -1;
		int deldata = front->data;
		if (Size() == 1) {
			Init();
			numOfData++;
		}
		else {
			Node* delnode = front;
			front = front->next;
			delnode->next = NULL;
			front->prev = NULL;
			delete delnode;
		}
		numOfData--;
		return deldata;
	}
	int PopBack()
	{
		if (Empty()) return -1;
		int deldata = back->data;
		if (Size() == 1) {
			Init();
			numOfData++;
		}
		else {
			Node* delnode = back;
			back = back->prev;
			delnode->prev = NULL;
			back->next = NULL;
			delete delnode;
		}
		numOfData--;
		return deldata;
	}
	int Front()
	{
		if (Empty()) return -1;
		else return front->data;
	}
	int Back()
	{
		if (Empty()) return -1;
		else return back->data;
	}
};
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	Deque d;
	d.Init();
	int test;
	cin >> test;
	for (int i = 0; i < test; i++) {
		string s;
		cin >> s;
		if (s == "push_front") {
			int n;
			cin >> n;
			d.PushFront(n);
		}
		else if (s == "push_back") {
			int n;
			cin >> n;
			d.PushBack(n);
		}
		else if (s == "pop_front") {
			cout << d.PopFront() << '\n';
		}
		else if (s == "pop_back") {
			cout << d.PopBack() << '\n';
		}
		else if (s == "size") {
			cout << d.Size() << '\n';
		}
		else if (s == "empty") {
			cout << d.Empty() << '\n';
		}
		else if (s == "front") {
			cout << d.Front() << '\n';
		}
		else if (s == "back") {
			cout << d.Back() << '\n';
		}
	}
	return 0;
}