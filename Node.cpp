//Node.cpp
#include "Node.h"
#include "Student.h"

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

Student* getStudent() {
	return this->student;
}

void setNext(Node* node) {
	this->next = node;
}

void setStudent(Student* student) {
	this->student = student;
}
Node* createNode(Student* student) {
	return new Node(student);
}


