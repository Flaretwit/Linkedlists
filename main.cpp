#include <iostream>
#include <string.h>

#include "Node.h"

using namespace std;

int main() {
	Node* head = new Node(new Student(int id = 5));
	Node* next = new Node(new Student(int id = 7));
	head.setNext(next);
	cout << head->next->getStudent()->id;
	return 0;
}
