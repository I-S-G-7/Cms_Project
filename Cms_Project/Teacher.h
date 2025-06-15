#ifndef TEACHER_H
#define TEACHER_H
#include"User.h"
class Teacher : public User {
public:
	void displayUser();
	void markAttendance();
	void enterGrades();
};
#endif