#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
using namespace std;

class Course
{
public:
	Course(){}
	Course(string courseNumber, string courseName, string courseType,
		double courseCredits, string courseTerm) : courseNumber(courseNumber),
		courseName(courseName), courseType(courseType), courseCredits(courseCredits),
		courseTerm(courseTerm){}
	~Course(){}
	int EnterCourse();       // 课程录入
	int FindCourse();        // 课程查询
	int ChangeCourse();      // 课程修改
private:
	string courseNumber;     // 课程编号
	string courseName;       // 课程名
	string courseType;       // 课程类型(必修/选修)
	double courseCredits;    // 课程学分
	string courseTerm;       // 开课学期
	vector<Course *> course;
};

#endif