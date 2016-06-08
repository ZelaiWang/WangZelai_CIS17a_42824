/*
 * This project is Student Information Management System use the menu to stroed
 * students information, and read it, change it, It incloud course information,
 * grade information, pay information, selectCourse information, Student's 
 * information and rivew schoolship. Its easy to use, when you type in your 
 * information we can read it by you student ID, and to help you get other 
 * information
 * 
 * This project is clear 
 * There are 7 file cpp and 6 hand file and around 1500 line
 * about 50 varible, 20 function
 * and class in the hand file
 * 
 * when I finish this project i'm so exciting,
 * I know its not hard, not interesting, but I think its useful.
 * During the preparation of this project I asked a lot of people, and check 
 * a lot of information, I learned a lot, and I will learn more in the future
 */
#include <iostream>
#include <cstdlib>
#include "course.h"
#include "grade.h"
#include "pay.h"
#include "selectCourse.h"
#include "student.h"
#include "reviewSchoolship.h"

using namespace std;

void PrintMenu();
void PrintStudentManageMenu();
void PrintCourseManageMenu();
void PrintGradeManageMenu();
void PrintPayManageMenu();
void PrintReviewSchoolshipMenu();
void PrintSelCourseManageMenu();
void StudentManage(Student &su);
void CourseManage(Course &co);
void GradeManage(Grade &gd, Student &su);
void PayManage(Pay &p, Student &su);
void SelCourseManage(SelectCourse &selc);
void ReviewSchoolshipManage(Grade gd, Student su, ReviewSchoolship rs);


int main(void)
{
	Student su;
	Course co;
	SelectCourse selc;
	Pay p;
	Grade gd;
	ReviewSchoolship rs;
	int select;

	while (1)
	{
		PrintMenu();
		cin >> select;
		switch (select)
		{
		case 0:
			exit(0);
		case 1:
			StudentManage(su);
			break;
		case 2:
			CourseManage(co);
			break;
		case 3:
			PayManage(p, su);
			break;
		case 4:
			SelCourseManage(selc);
			break;
		case 5:
			GradeManage(gd, su);
			break;
		case 6:
			ReviewSchoolshipManage(gd, su, rs);
			break;
		default:
			break;
		}
		system("pause");
	}
	return 0;
}


void PrintMenu()
{
	system("cls");
	cout << "\t\t\t**********  Student Information Management System  ***************" << endl;
	cout << "\t\t\t*                     1.Student Management                       *" << endl;
	cout << "\t\t\t*                     2.Course Management                        *" << endl;
	cout << "\t\t\t*                     3.Payment Management                       *" << endl;
	cout << "\t\t\t*                     4.Course Management                        *" << endl;
	cout << "\t\t\t*                     5.Grade Management                         *" << endl;
	cout << "\t\t\t*                     6.Scholarships Management                  *" << endl;
	cout << "\t\t\t*                     0.exit                                     *" << endl;
	cout << "\t\t\t******************************************************************" << endl;
	cout << "Please enter your choice(0-6) : ";
}


void PrintStudentManageMenu()
{
	system("cls");
	cout << "\t\t\t1.Admission Registration" << endl;
	cout << "\t\t\t2.Student information queries" << endl;
	cout << "\t\t\t3.Roll error correction" << endl;
	cout << "\t\t\t4.Graduation" << endl;
	cout << "\t\t\t0.exit" << endl;
	cout << "Please enter your choice ： ";
}

void StudentManage(Student &su)
{
	while (1)
	{
		PrintStudentManageMenu();
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 0:
			return;
		case 1:
			su.StudentReport();
			break;
		case 2:
			su.FindStudent();
			break;
		case 3:
			su.ChangeStudent();
			break;
		case 4:
			su.LeaveSchool();
			break;
		default:
			cout << "Error Enter ！" << endl;
			break;
		}
		system("pause");
	}

}

void PrintCourseManageMenu()
{
	system("cls");
	cout << "\t\t\t1.Course entry" << endl;
	cout << "\t\t\t2.Course Enquiry" << endl;
	cout << "\t\t\t3.Course Curricula" << endl;
	cout << "\t\t\t0.exit" << endl;
	cout << "Please enter your choice ： ";
}


void CourseManage(Course &co)
{
	while (1)
	{
		PrintCourseManageMenu();
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 0:
			return;
		case 1:
			co.EnterCourse();
			break;
		case 2:
			co.FindCourse();
			break;
		case 3:
			co.ChangeCourse();
			break;
		default:
			cout << "Erreo Enter！" << endl;
			break;
		}
		system("pause");
	}
}


void PrintGradeManageMenu()
{
	system("cls");
	cout << "\t\t\t1.Score Entry" << endl;
	cout << "\t\t\t2.Score Inquire" << endl;
	cout << "\t\t\t3.Score modify" << endl;
	cout << "\t\t\t4.Credits Statistics" << endl;
	cout << "\t\t\t0.exit" << endl;
	cout << "Please enter your choice ： ";
}

void GradeManage(Grade &gd, Student &su)
{
	while (1)
	{
		PrintGradeManageMenu();
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 0:
			return;
		case 1:
			gd.EnterGrade();
			break;
		case 2:
			gd.FindGrade();
			break;
		case 3:
			gd.ChangeGrade();
			break;
		case 4:
			gd.TotalCredits(su);
			break;
		default:
			cout << "Error Enter！" << endl;
			break;
		}
		system("pause");
	}
}

void PrintPayManageMenu()
{
	system("cls");
	cout << "\t\t\t1.Discover tuition payment information" << endl;
	cout << "\t\t\t2.Modify tuition payment information" << endl;
	cout << "\t\t\t0.exit" << endl;
	cout << "Please enter your choice ： ";
}


void PayManage(Pay &p, Student &su)
{
	while (1)
	{
		PrintPayManageMenu();
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 0:
			return;
		case 1:
			p.FindPay(su);
			break;
		case 2:
			p.ChangePay(su);
		default:
			cout << "Error Enter！" << endl;
			break;
		}
		system("pause");
	}
}

void PrintSelCourseManageMenu()
{
	system("cls");
	cout << "\t\t\t1.Course information input" << endl;
	cout << "\t\t\t2.Course Information inquiry" << endl;
	cout << "\t\t\t3.Modify Course Information" << endl;
	cout << "\t\t\t0.exit" << endl;
	cout << "Please enter your choice ： ";
}


void SelCourseManage(SelectCourse &selc)
{
	while (1)
	{
		PrintSelCourseManageMenu();
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 0:
			return;
		case 1:
			selc.ChooseCourse();
			break;
		case 2:
			selc.FindCourse();
			break;
		case 3:
			selc.ChangeCourse();
			break;
		default:
			cout << "Error Enter！" << endl;
			break;
		}
		system("pause");
	}
}

void PrintReviewSchoolshipMenu()
{
	system("cls");
	cout << "\t\t\t1.Entry points" << endl;
	cout << "\t\t\t2.Sequence" << endl;
	cout << "\t\t\t3.Print scholarships" << endl;
	cout << "\t\t\t0.exit" << endl;
	cout << "Please enter your choice ： ";
}

void ReviewSchoolshipManage(Grade gd, Student su, ReviewSchoolship rs)
{
	while (1)
	{
		PrintReviewSchoolshipMenu();
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 0:
			return;
		case 1:
			rs.EnterCredits(su, gd);
			break;
		case 2:
			rs.Sort();
			break;
		case 3:
			rs.PrintSchoolship();
			break;
		default:
			cout << "Error Enter！" << endl;
			break;
		}
		system("pause");
	}
}
