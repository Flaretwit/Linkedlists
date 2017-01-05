#include <iostream>
#include <string.h>
#include "Student.h"
#include "Node.h"

using namespace std;

int main() {
	Node* head = new Node(new Student(5));
	Node* next = new Node(new Student(7));
	Node* last = new Node(new Student(9));
	head->setNext(next);
	next->setNext(last);
	cout << head->getNext()->getStudent()->getId();
	return 0;
}
