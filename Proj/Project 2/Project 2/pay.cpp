#include "pay.h"

#include <iostream>
using namespace std;

void Pay::InitPay(Student stu)
{
	vector<Student *> store = stu.GetStore();
	pay.clear();
	vector<Student *>::iterator it;
	for (it = store.begin(); it != store.end(); ++it)
	{
		Pay *s = new Pay((*it)->getStudentNumber(), (*it)->GetTuition());
		pay.push_back(s);
	}
}
int Pay::FindPay(Student stu)
{
	InitPay(stu);
	string studentNumber; // 学号
	cout << "Please enter the Student ID ： ";
	cin >> studentNumber;

	vector<Pay *>::iterator it;
	for (it = pay.begin(); it != pay.end(); ++it)
	{
		if ((*it)->studentNumber == studentNumber)
		{
			cout << "student ID ： " << (*it)->studentNumber << endl;
			cout << "Tuition Amount : " << (*it)->tuition << endl;
			if ((*it)->isPay)
			{
				cout << "Whether payment: Yes" << endl;
			}
			else
				cout << "Whether payment: No" << endl;
			return 1;
		}
	}

	if (it == pay.end())
	{
		cout << "The school number is not found, the lookup fails!" << endl;
		return -1;
	}
}

int Pay::ChangePay(Student stu)
{
	InitPay(stu);
	string studentNumber; // 学号
	string payment;       
	cout << "Please enter the Student ID ： ";
	cin >> studentNumber;

	vector<Pay *>::iterator it;
	for (it = pay.begin(); it != pay.end(); ++it)
	{
		if ((*it)->studentNumber == studentNumber)
		{
			cout << "Tuition Amount : " << (*it)->tuition << endl;
			cout << "Whether payment (y or n) : ";
			cin >> payment;

			if (payment == "y")
			{
				(*it)->isPay = true;
			}
			else
				(*it)->isPay = false;
			cout << "Payment Success..." << endl;
			return 1;
		}
	}

	if (it == pay.end())
	{
		cout << "The school number is not found, payment failure!" << endl;
		return -1;
	}
}


vector<Pay *> Pay::GetPay()
{
	return pay;
}

string Pay::GetStudentNumber()
{
	return studentNumber;
}
bool Pay::GetIsPay()
{
	return isPay;
}