#ifndef GRADE_H
#define GRADE_H

#include <string>
#include <vector>
#include "student.h"
using namespace std;

class Grade
{
public:
	Grade(){}
	Grade(string number, string classroom, string courseName, string term, 
		double grade, double credit) :
		number(number), classroom(classroom), courseName(courseName),
		term(term), grade(grade), credit(credit){}
	~Grade(){}
	int EnterGrade();
	int FindGrade();
	int ChangeGrade();
	void TotalCredits(Student &su);
	string GetNumber();
	double GetGrade();
	vector<Grade *> GetGradeStore();
private:
	string number;              // 学号
	string classroom;           // 所在班级
	string courseName;          // 课程名字
	string term;                // 学期
	double grade;               // 成绩
	double credit;              // 学分
	vector<Grade *> gradeStore; 
};


#endif