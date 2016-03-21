//This program is use to enter the month (letting the user enter an integer
//in the range of 1 through 12) and the year. The program should then display 
//the number of days in that month.
#include<iostream>
using namespace std;

//Use bool to determine whether it is a leap year
bool LeapYear(int year){
if((year%400==0) ||((year%100!=0)&&(year%4==0)))
return true;
else
return false;
}

//Use Array to get the number of days of the month
int GetNumberOfDays(int month,int year){
int leapyearmonthdays[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
int nonleapyearmonthdays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
if(LeapYear(year))
return leapyearmonthdays[month-1];
else
return nonleapyearmonthdays[month-1];
}

//The main function is type the year and month that you want to determine
int main(){
int month;
int year;
cout << "Enter the year(YYYY): ";
cin  >> year;
cout << "\nEnter the month(1 - 12): " ;
cin  >> month;
cout << "\nNumber of days is: " << GetNumberOfDays(month, year) << endl;
return 0;
}

