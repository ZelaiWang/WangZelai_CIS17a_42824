#ifndef PAY_H
#define PAY_H

#include "student.h"
#include <string>
#include <vector>
using namespace std;

class Pay
{
public:
	Pay(){}
	Pay(string studentNumber, double tuition) :
		studentNumber(studentNumber), tuition(tuition)
	{
		isPay = false;
	}
	~Pay(){}
	void InitPay(Student stu);
	int FindPay(Student stu);        // 缴费信息的查询
	int ChangePay(Student stu);      // 缴费信息的修改
	vector<Pay *> GetPay();
	string GetStudentNumber();
	bool GetIsPay();
private:
	string studentNumber; // 学号
	double tuition;       // 学费金额
	bool isPay;           // 默认是false
	vector<Pay *> pay;
};


#endif