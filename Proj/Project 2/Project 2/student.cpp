#include "student.h"

#include <iostream>
#include <cstdlib>
using namespace std;

void Student::StudentReport()
{
	string number;               // 学生学号
	string name;                 // 学生姓名
	string enterTime;            // 入学时间
	string grade;                // 所在年级
	string classroom;            // 所在班级
	double tuition;              // 学费金额

	cout << "Please enter the Student ID ： ";
	cin >> number;
	cout << "Please type in your name ： ";
	cin >> name;
	cout << "Please enter the enterTime ： ";
	cin >> enterTime;
	cout << "Please enter the grade level ： ";
	cin >> grade;
	cout << "Please enter a class name ： ";
	cin >> classroom;
	cout << "Please enter the amount of tuition fees ： ";
	cin >> tuition;

	Student *temp = new Student(number, name, enterTime, grade, classroom, tuition);
	store.push_back(temp);
	cout << "Students report success..." << endl;
}

int Student::FindStudent()
{
	string number;               // 学生学号
	cout << "Please enter the Student ID ： ";
	cin >> number;

	int size = store.size();
	int i;
	for (i = 0; i < size; i++)
	{
		if (store[i]->number == number)
		{
			cout << "student ID ： " << store[i]->number << endl;
			cout << "Full name ： " << store[i]->name << endl;
			cout << "Admission time ： " << store[i]->enterTime << endl;
			cout << "Grades level ： " << store[i]->grade << endl;
			cout << "class name ： " << store[i]->classroom << endl;
			cout << "Tuition Amount ： " << store[i]->tuition << endl;
			cout << "Compulsory credits ： " << store[i]->compulsoryCredits << endl;
			cout << "Elective credits ： " << store[i]->electiveCredits << endl;
			cout << "Leaving time ： " << store[i]->leaveSchoolTime << endl;
			cout << "Leaving Reason ： " << store[i]->leaveReason << endl;
			return 1;
		}
	}
	if (i == size)
	{
		cout << "Lookup fails, the student number is not found！" << endl;
		return -1;
	}
	return 1;
}

void Student::PrintChangeMenu()
{
	system("cls");
	cout << "\t\t1.modify student name" << endl;
	cout << "\t\t2.modify Admission time" << endl;
	cout << "\t\t3.modify Grades level" << endl;
	cout << "\t\t4.modify class name" << endl;
	cout << "\t\t5.modify Tuition Amount" << endl;
	cout << "\t\t6.modify Compulsory credits" << endl;
	cout << "\t\t7.modify Elective credits" << endl;
	cout << "\t\t8.modify Leaving time" << endl;
	cout << "\t\t9.modify Leaving Reason" << endl;
	cout << "\t\t0.exit modify" << endl;
	cout << "Please enter your choice(0-9) : " << endl;
}

int Student::ChangeStudent()
{
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

	int choice;
	int size;
	int i;
	while (1)
	{
		PrintChangeMenu();
		cin >> choice;
		switch (choice)
		{
		case 0:
			return 1;
		case 1:
			cout << "Please enter the Student ID : ";
			cin >> number;
			cout << "Please enter a new name : ";
			cin >> name;

			size = store.size();
			for (i = 0; i < size; i++)
			{
				if (store[i]->number == number)
				{
					store[i]->name = name;
					cout << "Modify Name of student success..." << endl;
					break;
				}
			}
			if (i == size)
			{
				cout << "Modification fails, the student number is not found！" << endl;
			}
			break;
		case 2:
			cout << "Please enter the Student ID : ";
			cin >> number;
			cout << "Please enter a new time enrollment : ";
			cin >> enterTime;

			size = store.size();
			for (i = 0; i < size; i++)
			{
				if (store[i]->number == number)
				{
					store[i]->enterTime= enterTime;
					cout << "Modify time student enrollment success..." << endl;
					break;
				}
			}
			if (i == size)
			{
				cout << "Modification fails, the student number is not found！" << endl;
			}
			break;
		case 3:
			cout << "Please enter the Student ID : ";
			cin >> number;
			cout << "Please enter a new year where : ";
			cin >> grade;

			size = store.size();
			for (i = 0; i < size; i++)
			{
				if (store[i]->number == number)
				{
					store[i]->grade = grade;
					cout << "Modify graders where success..." << endl;
					break;
				}
			}
			if (i == size)
			{
				cout << "Modification fails, the student number is not found！" << endl;
			}
			break;
		case 4:
			cout << "Please enter the Student ID : ";
			cin >> number;
			cout << "Please enter a new class : ";
			cin >> classroom;

			size = store.size();
			for (i = 0; i < size; i++)
			{
				if (store[i]->number == number)
				{
					store[i]->classroom = classroom;
					cout << "Modify the student's classroom success..." << endl;
					break;
				}
			}
			if (i == size)
			{
				cout << "Modification fails, the student number is not found！" << endl;
			}
			break;
		case 5:
			cout << "Please enter the number of students to learn : ";
			cin >> number;
			cout << "Please enter a new amount of tuition fees : ";
			cin >> tuition;

			size = store.size();
			for (i = 0; i < size; i++)
			{
				if (store[i]->number == number)
				{
					store[i]->tuition = tuition;
					cout << "Modify the amount of tuition success..." << endl;
					break;
				}
			}
			if (i == size)
			{
				cout << "Modification fails, the student number is not found！" << endl;
			}
			break;
		case 6:
			cout << "Please enter the Student ID : ";
			cin >> number;
			cout << "Please enter a new compulsory credits : ";
			cin >> compulsoryCredits;

			size = store.size();
			for (i = 0; i < size; i++)
			{
				if (store[i]->number == number)
				{
					store[i]->compulsoryCredits = compulsoryCredits;
					cout << "Modify compulsory credits students succeed..." << endl;
					break;
				}
			}
			if (i == size)
			{
				cout << "Modification fails, the student number is not found！" << endl;
			}
			break;
		case 7:
			cout << "Please enter the Student ID : ";
			cin >> number;
			cout << "Please enter a new elective credit : ";
			cin >> electiveCredits;

			size = store.size();
			for (i = 0; i < size; i++)
			{
				if (store[i]->number == number)
				{
					store[i]->electiveCredits = electiveCredits;
					cout << "Modify student success elective credits..." << endl;
					break;
				}
			}
			if (i == size)
			{
				cout << "Modification fails, the student number is not found！" << endl;
			}
			break;
		case 8:
			cout << "Please enter the Student ID : ";
			cin >> number;
			cout << "Please enter a new time leaving : ";
			cin >> leaveSchoolTime;

			size = store.size();
			for (i = 0; i < size; i++)
			{
				if (store[i]->number == number)
				{
					store[i]->leaveSchoolTime = leaveSchoolTime;
					cout << "Modify time students leave school success..." << endl;
					break;
				}
			}
			if (i == size)
			{
				cout << "Modification fails, the student number is not found！" << endl;
			}
			break;
		case 9:
			cout << "Please enter the Student ID : ";
			cin >> number;
			cout << "Please enter a new reason for leaving : ";
			cin >> leaveReason;

			size = store.size();
			for (i = 0; i < size; i++)
			{
				if (store[i]->number == number)
				{
					store[i]->leaveReason = leaveReason;
					cout << "Modify students to leave the reasons for success..." << endl;
					break;
				}
			}
			if (i == size)
			{
				cout << "Modification fails, the student number is not found！" << endl;
			}
			break;
		default:
			cout << "Error Please Enter(0-9)" << endl;
			break;
		}
		system("pause");
	}
}


void Student::LeaveSchool()
{
	string number;               // 学生学号
	cout << "Please enter the number of students to learn : " << endl;
	cin >> number;

	vector<Student *>::iterator it;
	for (it = store.begin(); it != store.end(); ++it)
	{
		if ((*it)->number == number)
		{
			store.erase(it);
			cout << "The successful graduate student..." << endl;
			break;
		}
	}
	if (it == store.end())
	{
		cout << "Graduate fails, the student number is not found！" << endl;
	}
}

vector<Student *> Student::GetStore()
{
	return store;
}

string Student::getStudentNumber()
{
	return number;
}

double Student::GetTuition()
{
	return tuition;
}


double Student::GetCompulsoryCredits()
{
	return compulsoryCredits;
}
void Student::SetCompulsoryCredits(double compulsoryCredits)
{
	this->compulsoryCredits = compulsoryCredits;
}

string Student::GetClassroom()
{
	return classroom;
}