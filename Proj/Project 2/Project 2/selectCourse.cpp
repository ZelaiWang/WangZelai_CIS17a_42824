#include "selectCourse.h"

#include <iostream>
using namespace std;

int SelectCourse::ChooseCourse()
{
	string number;
	string courseName;
	cout << "Please enter the Student ID ： ";
	cin >> number;

	Pay p;
	vector<Pay *> pay = p.GetPay();
	vector<Pay *>::iterator it;
	for (it = pay.begin(); it != pay.end(); ++it)
	{
		if ((*it)->GetStudentNumber() == number)
		{
			if (!(*it)->GetIsPay())
			{
				cout << "The student did not pay, not elective!" << endl;
				return -1;
			}
			break;
		}
	}

	if (it == pay.end())
	{
		cout << "Enter the student number is wrong, course failure!" << endl;
		return -1;
	}

	cout << "Please enter the name of elective courses ： ";
	cin >> courseName;

	SelectCourse *s = new SelectCourse(number, courseName);
	selCourse.push_back(s);
	cout << "Course Success..." << endl;
	return 1;
}

int SelectCourse::FindCourse()
{
	string number;
	cout << "Please enter the Student ID ： ";
	cin >> number;

	vector<SelectCourse *>::iterator it;
	for (it = selCourse.begin(); it != selCourse.end(); ++it)
	{
		if ((*it)->number == number)
		{
			cout << "The students choose courses "
                                "for ： " << (*it)->courseName << endl;
			return 1;
		}
	}

	if (it == selCourse.end())
	{
		cout << "Enter the student number is wrong, "
                        "the student number is not found!" << endl;
		return -1;
	}
	return 1;
}

int SelectCourse::ChangeCourse()
{
	string number;
	string courseName;
	cout << "Please enter the Student ID ： ";
	cin >> number;

	vector<SelectCourse *>::iterator it;
	for (it = selCourse.begin(); it != selCourse.end(); ++it)
	{
		if ((*it)->number == number)
		{
			cout << "Course selection for the new : ";
			cin >> courseName;
			(*it)->courseName = courseName;
			cout << "Modify Course Success" << endl;
			return 1;
		}
	}

	if (it == selCourse.end())
	{
		cout << "Enter the student number is wrong, "
                        "the student number is not found!" << endl;
		return -1;
	}
	return 1;
}