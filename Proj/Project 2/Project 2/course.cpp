#include "course.h"
#include <iostream>
using namespace std;

int Course::EnterCourse()
{
	string courseNumber;     // 课程编号
	string courseName;       // 课程名
	string courseType;       // 课程类型(必修\选修)
	double courseCredits;    // 课程学分
	string courseTerm;       // 开课学期

	cout << "Please enter the course code : ";
	cin >> courseNumber;
	cout << "Please enter the course name : ";
	cin >> courseName;
	cout << "Enter Course type (compulsory or elective) : ";
	cin >> courseType;
	cout << "Please enter a course credit : ";
	cin >> courseCredits;
	cout << "Please enter Semester : ";
	cin >> courseTerm;

	Course *s = new Course(courseNumber, courseName, courseType, courseCredits, courseTerm);
	course.push_back(s);
	return 1;
}

int Course::FindCourse()
{
	string courseNumber;     // 课程编号
	cout << "Please enter the course code : ";
	cin >> courseNumber;

	vector<Course *>::iterator it;
	for (it = course.begin(); it != course.end(); ++it)
	{
		if ((*it)->courseNumber == courseNumber)
		{
			cout << "Course No     : " << (*it)->courseNumber << endl;
			cout << "course name   : " << (*it)->courseName << endl;
			cout << "Course type   : " << (*it)->courseType << endl;
			cout << "Course credit : " << (*it)->courseCredits << endl;
			cout << "Semester      : " << (*it)->courseTerm << endl;
			return 1;
		}
	}

	if (it == course.end())
	{
		cout << "Did not find the corresponding curriculum, "
                        "the curriculum query fails" << endl;
		return -1;
	}
	return 1;
}

int Course::ChangeCourse()
{
	string courseNumber;     // 课程编号
	string courseName;       // 课程名
	string courseType;       // 课程类型(必修\选修)
	double courseCredits;    // 课程学分
	string courseTerm;       // 开课学期

	cout << "Please enter the course code : ";
	cin >> courseNumber;

	vector<Course *>::iterator it;
	for (it = course.begin(); it != course.end(); ++it)
	{
		if ((*it)->courseNumber == courseNumber)
		{
			cout << "Please enter a new program name : ";
			cin >> courseName;
			cout << "Please enter a new type of curriculum : ";
			cin >> courseType;
			cout << "Please enter a new course credits : ";
			cin >> courseCredits;
			cout << "Please enter a new semester : ";
			cin >> courseTerm;
			cout << "Modify the course successfully..." << endl;
			return 1;
		}
	}

	if (it == course.end())
	{
		cout << "Did not find the corresponding curriculum, "
                        "failed to modify the course" << endl;
		return -1;
	}

	return 1;
}