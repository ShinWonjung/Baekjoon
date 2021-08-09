#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
};
struct Stack
{
	Node* head;
	int numOfData;
};
void Init(Stack* pstack)
{
	Node* node = new Node;
	pstack->head = node;
	node->next = NULL;
	pstack->numOfData = 0;
}
int Empty(Stack* pstack)
{
	if (pstack->head->next == NULL) return 1;
	else return 0;
}
void Push(Stack* pstack, int n)
{
	Node* node = new Node;
	node->data = n;
	node->next = pstack->head->next;
	pstack->head->next = node;
	pstack->numOfData++;
}
int Pop(Stack* pstack)
{
	if (Empty(pstack) == 1) return -1;
	else {
		int ddata = pstack->head->next->data;
		Node* dnode = pstack->head->next;
		pstack->head->next = dnode->next;
		dnode->next = NULL;
		delete dnode;
		pstack->numOfData--;
		return ddata;
	}
}
int Size(Stack* pstack)
{
	return pstack->numOfData;
}
int Top(Stack* pstack)
{
	if (Empty(pstack) == 1) return -1;
	else return pstack->head->next->data;
}
int main()
{
	Stack stack;
	Init(&stack);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string test;
		cin >> test;

		if (test == "push") {
			int num;
			cin >> num;
			Push(&stack, num);
		}
		else if (test == "pop") cout << Pop(&stack) << "\n";
		else if (test == "size") cout << Size(&stack) << "\n";
		else if (test == "empty") cout << Empty(&stack) << "\n";
		else if (test == "top") cout << Top(&stack) << "\n";
	}
	return 0;
}