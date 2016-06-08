#ifndef SELECTCOURSE_H
#define SELECTCOURSE_H

#include "course.h"
#include "pay.h"
#include <string>
#include <vector>
using namespace std;

class SelectCourse
{
public:
	SelectCourse(){}
	SelectCourse(string number, string courseName) :
		number(number), courseName(courseName){}
	~SelectCourse(){}
	int ChooseCourse();   // 录入
	int FindCourse();     // 查询
	int ChangeCourse();   // 修改
private:
	string number;        // 学号
	string courseName;    // 所选修课程的名字
	vector<SelectCourse *> selCourse;
};


#endif