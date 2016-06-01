#include <iostream>
#include <string>

using namespace std;

class Employee{
protected:string EmpName;
        int EmpNumber;
        string Hiredate;
public: Employee(){
            EmpName=" ";
            EmpNumber=0;
            Hiredate=" ";
        }
        Employee(string name, int number,string date){
            EmpName=name;
            EmpNumber=number;
            Hiredate=date;
        }
public: void setEmpName(string);
        void setEmpNumber(int);
        void setHireDate(string);
        string getEmpName();
        int getEmpNumber();
        string getHireDate();
};

void Employee::setEmpName(string str){
    EmpName=str;
}
void Employee::setEmpNumber(int num){
    EmpName=num;
}
void Employee::setHireDate(string date){
    EmpName=date;
}
string Employee::getEmpName(){
    return EmpName;
}
int Employee::getEmpNumber(){
    return EmpNumber;
}
string Employee::getHireDate(){
    return Hiredate;
}

class ShiftSupervisor:public Employee{
private:double AnnualSalary;
        double AnnualBonus;
public: ShiftSupervisor(){
        AnnualSalary=0.0;
        AnnualBonus=0.0;
        }
        ShiftSupervisor(double sal,double bonus){
            AnnualSalary=sal;
            AnnualBonus=bonus;
        }
public: void setAnnualSalary(double);
        void setAnnualBonus(double);
        double getAnnualSalary();
        double getAnnualBonus();
};

void ShiftSupervisor::setAnnualBonus(double bonus){
    AnnualBonus=bonus;
}
void ShiftSupervisor::setAnnualSalary(double sal){
    AnnualSalary=sal;
}
double ShiftSupervisor::getAnnualBonus(){
    return AnnualBonus;
}
double ShiftSupervisor::getAnnualSalary(){
    return AnnualSalary;
}
int main(){
    ShiftSupervisor emp1;
    string name;
    string date;
    double Abonus,Asalary;

    cout <<"Enter Employee Name:";
    cin  >>name;
    emp1.setEmpName(name);
    emp1.setEmpNumber(562);
    emp1.setHireDate("June 21");
    cout <<"Enter Anual Bonus:";
    cin  >>Abonus;
    emp1.setAnnualBonus(Abonus);
    cout <<"Enter Anual Salary:";
    cin  >>Asalary;
    emp1.setAnnualSalary(Asalary);

    cout <<"----Shift Supervisor Deatils----"  <<endl;
    cout <<"Employee Name:"     <<emp1.getEmpName()<<endl;
    cout <<"Employee Number:"   <<emp1.getEmpNumber()<<endl;
    cout <<"Employee Hire Date:"<<emp1.getHireDate()<<endl;
    cout <<"Enter Annual salary:"<<emp1.getAnnualSalary()<<endl;
    cout <<"enter Annual Bonus:"<<emp1.getAnnualBonus()<<endl;
}