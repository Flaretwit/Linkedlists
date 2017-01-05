//Student.cpp

#include "Student.h"

Student::Student() {
	id = 0;
}

Student::Student(int id) {
	this->id = id;
}

Student::~Student() {

}

int Student::getId() {
	return this->id;
}
