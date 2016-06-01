
#include <iostream>
#include <string>

using namespace std;

class Employee{
private:string EmpName;
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
        void setEmpName(string);
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

class ProductionWorker:public Employee{
private:int Shift;
        double HourlyPay;
public: ProductionWorker(){
        Shift=0;
        HourlyPay=0;
        }
        ProductionWorker(int sh,double pay){
            Shift=sh;
            HourlyPay=pay;
        }
        void setShift(int);
        void setHourlyPay(double);
        int getShift();
        double getHourlyPay();
};
void ProductionWorker::setShift(int sh){
    Shift=sh;
}
void ProductionWorker::setHourlyPay(double pay){
    HourlyPay=pay;
}
int ProductionWorker::getShift(){
    return Shift;
}
double ProductionWorker::getHourlyPay(){
    return HourlyPay;
}
int main(){
    int shift;
    double pay;
    cout <<" 1-DayShift \n 2-Night"<<endl;
    cout <<"Enter shift:";
    cin  >>shift;
    cout <<"Enter hourly pay:";
    cin  >>pay;
    
    ProductionWorker emp1(shift,pay);
    
    emp1.setEmpName("Winston");
    emp1.setEmpNumber(562);
    emp1.setHireDate("June:11");
    
    cout <<"Employee Deatils:"  <<endl<<endl;
    cout <<"Employee Name:"     <<emp1.getEmpName()<<endl;
    cout <<"Employee Number:"   <<emp1.getEmpNumber()<<endl;
    cout <<"Employee Hire Date:"<<emp1.getHireDate()<<endl;
    cout <<"Employee Shift:"    <<emp1.getShift()<<endl;
    cout <<"Employee HourlyPay:"<<emp1.getHourlyPay()<<endl;
    return 0;
}