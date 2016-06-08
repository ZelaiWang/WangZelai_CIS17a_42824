#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
using namespace std;

class Student
{
public:
	Student(){}
	Student(string number, string name, string enterTime, string grade,
		string classroom, double tuition, double compulsoryCredits = 0,
		double electiveCredits = 0, string leaveSchoolTime = "无", string leaveReason = "无") :
		number(number), name(name), enterTime(enterTime), grade(grade),
		classroom(classroom), tuition(tuition), compulsoryCredits(compulsoryCredits),
		electiveCredits(electiveCredits), leaveSchoolTime(leaveSchoolTime),
		leaveReason(leaveReason){ }
	~Student(){}
	void StudentReport();   // 入学报到
	int FindStudent();      // 查询学籍信息
	void PrintChangeMenu(); // 打印学籍错误改正菜单
	int ChangeStudent();    // 学籍错误改正
	void LeaveSchool();     // 学生毕业

	vector<Student *> GetStore();  // 获取存储学生信息
	string getStudentNumber();     // 获取学号
	double GetTuition();           // 获取学费金额
	double GetCompulsoryCredits(); // 获取必修学分
	void SetCompulsoryCredits(double compulsoryCredits); // 设置必修学分
	string GetClassroom();         // 获取班级信息
private:
	string number;               // 学生学号
	string name;                 // 学生姓名
	string enterTime;            // 入学时间
	string grade;                // 所在年级
	string classroom;            // 所在班级
	double tuition;              // 学费金额
	double compulsoryCredits;    // 必修学分
	double electiveCredits;      // 选修学分
	string leaveSchoolTime;      // 离校时间
	string leaveReason;          // 离校原因
	vector<Student *> store;     // 存储学生信息
};




#endif