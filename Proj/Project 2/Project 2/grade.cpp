#include "grade.h"
#include "course.h"


#include <iostream>
#include <cstdlib>
using namespace std;

int Grade::EnterGrade()
{
	bool flag = true;
	string judge;
	string number;              // 学号
	string classroom;           // 所在班级
	string courseName;          // 课程名字
	string term;                // 学期
	double grade;               // 成绩
	double credit;              // 学分

	system("cls");
	cout << "1.Enter a class a semester of a student's course Score" << endl;
	cout << "2.Students enter a full course grades" << endl;
	cout << "0.exit" << endl;
	cout << "Please enter your choice(0-2) : ";
	int choice;
	cin >> choice;

	switch (choice)
	{
	case 0:
		return 1;
	case 1:
		while (flag)
		{
			cout << "Please enter the Student ID : " << endl;
			cin >> number;
			cout << "Please enter a class where : " << endl;
			cin >> classroom;
			cout << "Please enter the course name : " << endl;
			cin >> courseName;
			cout << "Please enter the semester : " << endl;
			cin >> term;
			cout << "Please enter a Score : " << endl;
			cin >> grade;
			cout << "Please enter a credit ： " << endl;
			cin >> credit;
			Grade *s = new Grade(number, classroom, courseName, term, grade, credit);
			gradeStore.push_back(s);
			cout << "Score Input success..." << endl;
			cout << "Whether to continue the entry Score (yes / no) : " << endl;
			cin >> judge;
			if (judge == "no")
				flag = false;
		}
		break;
	case 2:
		while (flag)
		{
			cout << "Please enter the Student ID : " << endl;
			cin >> number;
			cout << "Please enter a class where : " << endl;
			cin >> classroom;
			cout << "Please enter the course name : " << endl;
			cin >> courseName;
			cout << "Please enter the semester : " << endl;
			cin >> term;
			cout << "Please enter a Score : " << endl;
			cin >> grade;
			cout << "Please enter a credit ： " << endl;
			cin >> credit;
			Grade *s = new Grade(number, classroom, courseName, term, grade, credit);
			gradeStore.push_back(s);
			cout << "Score Input success..." << endl;
			cout << "Whether to continue the entry Score (yes / n0) : " << endl;
			cin >> judge;
			if (judge == "no")
				flag = false;
		}
		break;
	default:
		cout << "Error Please Enter(0-2)" << endl;
		break;
	}
	system("pause");
	return 1;
}

int Grade::FindGrade()
{
	string number;              // 学号
	string courseName;          // 课程名字
	string term;                // 学期
	vector<Grade *>::iterator it;

	while (1)
	{
		system("cls");
		cout << "1.Discover a student in a course of a semester grades" << endl;
		cout << "2.Discover a student for a semester all Score" << endl;
		cout << "0.exit" << endl;
		cout << "Please enter your choice(0-2) : " << endl;
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 0:
			return 1;
		case 1:
			cout << "Please enter the Student ID ： ";
			cin >> number;
			cout << "Please enter the course name ： ";
			cin >> courseName;
			cout << "Please enter the semester : ";
			cin >> term;

			for (it = gradeStore.begin(); it != gradeStore.end(); ++it)
			{
				if ((*it)->number == number && (*it)->courseName == courseName
					&& (*it)->term == term)
				{
					cout << "Score ： " << (*it)->grade << endl;
					break;
				}
			}
			break;
		case 2:
			cout << "Please enter the Student ID ： ";
			cin >> number;
			cout << "Please enter the semester： ";
			cin >> term;

			for (it = gradeStore.begin(); it != gradeStore.end(); ++it)
			{
				if ((*it)->number == number && (*it)->term == term)
				{
					cout << (*it)->courseName << " : " << (*it)->grade << endl;
				}
			}
			break;
		default:
			cout << "Error Please Enter(0-2)" << endl;
			break;
		}
		system("pause");
	}
	
}

int Grade::ChangeGrade()
{
	string number;              // 学号
	string classroom;           // 所在班级
	string courseName;          // 课程名字
	string term;                // 学期
	double newGrade;            // 新的成绩

	cout << "Please enter the Student ID : " << endl;
	cin >> number;
	cout << "Please enter a class where : " << endl;
	cin >> classroom;
	cout << "Please enter the course name : " << endl;
	cin >> courseName;
	cout << "Please enter the semester : " << endl;
	cin >> term;

	vector<Grade *>::iterator it;
	for (it = gradeStore.begin(); it != gradeStore.end(); ++it)
	{
		if ((*it)->number == number && (*it)->classroom == classroom
			&& (*it)->courseName == courseName && (*it)->term == term)
		{
			cout << "The student's current score : " << (*it)->grade << endl;
			cout << "Please enter the modified Score ： ";
			cin >> newGrade;
			(*it)->grade = newGrade;
			cout << "Score changed successfully..." << endl;
			return 1;
		}
	}

	if (it == gradeStore.end())
	{
		cout << "The student's information is not found, "
                        "the modification fails!" << endl;
		return -1;
	}
	return 1;
}

void Grade::TotalCredits(Student &su)
{
	string number;              // 学号
	string classroom;           // 班级
	int choice;
	

	vector<Student *> store = su.GetStore();
	vector<Student *>::iterator it1;
	vector<Grade *>::iterator it2;
	double credits = 0;
	for (it1 = store.begin(); it1 != store.end(); ++it1)
	{
		credits = 0;
		for (it2 = gradeStore.begin(); it2 != gradeStore.end(); ++it2)
		{
			if ((*it1)->getStudentNumber() == (*it2)->number)
			{
				credits += (*it2)->grade;
			}
		}
		(*it1)->SetCompulsoryCredits(credits);
	}

	while (1)
	{
		system("cls");
		cout << "1.Statistics whole class credit information" << endl;
		cout << "2.Discover a student credit information" << endl;
		cout << "0.exit" << endl;
		cout << "Please enter your choice : ";
		cin >> choice;
		switch (choice)
		{
		case 0:
			return;
			break;
		case 1:
			cout << "Please enter the class : ";
			cin >> classroom;
			cout << "student ID\t\tcredit" << endl;
			for (it1 = store.begin(); it1 != store.end(); ++it1)
			{
				if ((*it1)->GetClassroom() == classroom)
				{
					cout << (*it1)->getStudentNumber() << "\t\t"
						<< (*it1)->GetCompulsoryCredits() << endl;
				}
			}
			break;
		case 2:
			cout << "Please enter the Student ID : ";
			cin >> number;

			for (it1 = store.begin(); it1 != store.end(); ++it1)
			{
				if ((*it1)->getStudentNumber() == number)
				{
					cout << "Credits： "
						<< (*it1)->GetCompulsoryCredits() << endl;
				}
			}
			break;
		default:
			cout << "Error Enter！" << endl;
			break;
		}
		system("pause");
	}
	
}


vector<Grade *> Grade::GetGradeStore()
{
	return gradeStore;
}

string Grade::GetNumber()
{
	return number;
}

double Grade::GetGrade()
{
	return grade;
}