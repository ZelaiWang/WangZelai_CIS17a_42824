
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
class TeamLeader:public ProductionWorker{
    private:double MonthlyBonus;
            int TRequiredHours;
            int TAttendHours;
    public: TeamLeader(){
            MonthlyBonus=0.0;
            TRequiredHours=0;
            TAttendHours=0;
            }
    TeamLeader(double Mbonus,int TRhours,int TAhours){
            MonthlyBonus=Mbonus;
            TRequiredHours=TRhours;
            TAttendHours=TAhours;
            }
    void setMonthlyBonus(double);
    void setTRequiredHours(int);
    void setTAttendHours(int);
    double getMonthlyBonus();
    int getTRequiredHours();
    int getTAttendHours();
};
void TeamLeader::setMonthlyBonus(double MBonus){
    MonthlyBonus=MBonus;
}
void TeamLeader::setTAttendHours(int Ahours){
    TRequiredHours=Ahours;
}
void TeamLeader::setTRequiredHours(int Rhours){
    TAttendHours=Rhours;
}
double TeamLeader::getMonthlyBonus(){
    return MonthlyBonus;
}
int TeamLeader::getTAttendHours(){
    return TRequiredHours;
}
int TeamLeader::getTRequiredHours(){
    return TAttendHours;
}
int main(){
    TeamLeader lead1;
    int shift;
    double pay;
    int requiredHours,attendHours,Mbonus;
    cout<<"Required Traning Hours:"<<lead1.getTRequiredHours()<<endl;
    cout<<"Attended Traning Hours:"<<lead1.getTAttendHours()<<endl;
}
