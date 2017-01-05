//Node.cpp
#include "Node.h"

using namespace std;

Node::Node() {
	Student* student = NULL;
	next = NULL;
}

Node::~Node() {
	delete student;
	next = NULL;
}

Node::Node(Student* student) {
	this->student = student;
	this->next = NULL;
}

Node* Node::getNext() {
	return this->next;	
}

Student* Node::getStudent() {
	return this->student;
}

void Node::setNext(Node* node) {
	this->next = node;
}

void Node::setStudent(Student* student) {
	this->student = student;
}


