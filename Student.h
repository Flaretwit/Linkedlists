//Student.h
#ifndef STUDENT_H
#define STUDENT_H

class Student {
	public:
		Student();
		Student(int id);
		~Student();
		int getId();
	private:
		int id;
};

#endif
