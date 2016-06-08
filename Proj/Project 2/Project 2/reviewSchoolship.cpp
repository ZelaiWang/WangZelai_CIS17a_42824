#include "reviewSchoolship.h"

#include <iostream>
#include <algorithm>
using namespace std;

void ReviewSchoolship::EnterCredits(Student su, Grade gd)
{
	string number;             // 学号
	double totalCredit;        // 总成绩
	double examCredit;         // 考试成绩得分
	double comprehensiveCredit;// 综合测评得分
	double addCredit;          // 加分

	vector<Student *> suStore = su.GetStore();
	vector<Grade *> gdStore = gd.GetGradeStore();
	vector<Student *>::iterator isu;
	vector<Grade *>::iterator igd;
	if (suStore.size() == 0)
	{
		cout << "Not enter any student information, "
                        "the operation can not be performed!" << endl;
		return;
	}

	for (isu = suStore.begin(); isu != suStore.end(); ++isu)
	{
		number = (*isu)->getStudentNumber();
		examCredit = 0;
		for (igd = gdStore.begin(); igd != gdStore.end(); ++igd)
		{
			if ((*igd)->GetNumber() == number)
			{
				examCredit += (*igd)->GetGrade();
			}
		}
		cout << "Please enter the Student ID" << number << "The "
                        "comprehensive evaluation score : ";
		cin >> comprehensiveCredit;
		cout << "Please enter the Student ID" << number << "Extra points : ";
		cin >> addCredit;
		cout << "student ID" << number << "Entry Success..." << endl << endl;

		// 总成绩 = 平时成绩*0.6 + 综合成绩*0.2 + 加分*0.2;
		totalCredit = examCredit * 0.6 + comprehensiveCredit * 0.2 + addCredit * 0.2;

		ReviewSchoolship *r = new ReviewSchoolship(number, totalCredit, examCredit,
			comprehensiveCredit, addCredit);
		schoolship.push_back(r);
		swap(schoolship[1], schoolship[2]);
	}
	cout << "All students completed entry points" << endl;
}

void ReviewSchoolship::Sort()
{
	vector<ReviewSchoolship *>::iterator it1, it2, max;
	for (it1 = schoolship.begin(); it1 != schoolship.end(); ++it1)
	{
		max = it1;
		for (it2 = it1 + 1; it2 != schoolship.end(); ++it2)
		{

			if ((*it2)->totalCredit > (*max)->totalCredit)
				max = it2;
		}

		if (max != it1)
			swap(max, it1);
	}
	cout << "Sort success..." << endl;
}

void ReviewSchoolship::PrintSchoolship()
{
	vector<ReviewSchoolship *>::iterator it1;
	cout << "Ranking\t\tstudent ID\t\tOverall result" << endl;
	int i = 0;
	for (it1 = schoolship.begin(); it1 != schoolship.end(); ++it1)
	{
		cout << i << "\t\t";
		cout << (*it1)->number << "\t  " << (*it1)->totalCredit << endl;
	}
}