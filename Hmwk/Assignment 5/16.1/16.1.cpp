
#include <iostream>

using namespace std;

class Date{
    private:int day;
            int month;
            int year;
    public: Date(){
                day=0;
                month=0;
                year=0;
            }
class IncalidDay{
    
};
class IncalidMonth{
    
};
void setDay(int);
void setMonth(int);
void setYear(int);
int getDay();
int getMonth();
int getYear();
void printFormat1();
void printFormat2();
void printFormat3();
};
void Date::setDay(int d){
    if(d<1||d>31)
        throw IncalidDay();
    else
        day=d;
}
void Date::setMonth(int m){
    if(m<1||m>12)
        throw IncalidMonth();
    else
        month=m;
}
void Date::setYear(int y){
    year=y;
}
int Date::getDay(){
    return day;
}
int Date::getMonth(){
    return month;
}
int Date::getYear(){
    return year;
}
void Date::printFormat1(){
    if(month>0&&month<10){
        if(day>0&&day<10)
             cout <<"0"<<month<<"/0"<<day<<"/"<<year%100<<endl;
        else
            cout <<"0"<<month<<"/"<<day<<"/"<<year%100<<endl;
    }
    else if(day>0&&day<10)
        cout <<month<<"/0"<<day<<"/"<<year%100<<endl;
    else
        cout <<month<<"/"<<day<<"/"<<year%100<<endl;
}
void Date::printFormat2(){
    switch(month){
        case 1:cout <<"January";
            break;
        case 2:cout <<"Febravary";
            break;
        case 3:cout <<"March";
            break;
        case 4:cout <<"April";
            break;
        case 5:cout <<"May";
            break;
        case 6:cout <<"June";
            break;
        case 7:cout <<"July";
            break;
        case 8:cout <<"Augest";
            break;
        case 9:cout <<"Suptember";
            break;
        case 10:cout <<"October";
            break;
        case 11:cout <<"November";
            break;
        case 12:cout <<"December";
            break;   
    }
    cout <<" "<<day<<","<<year<<endl;
}
void Date::printFormat3(){
    cout <<day<<",";
    switch(month){
        case 1:cout <<"January";
            break;
        case 2:cout <<"Febravary";
            break;
        case 3:cout <<"March";
            break;
        case 4:cout <<"April";
            break;
        case 5:cout <<"May";
            break;
        case 6:cout <<"June";
            break;
        case 7:cout <<"July";
            break;
        case 8:cout <<"Augest";
            break;
        case 9:cout <<"Suptember";
            break;
        case 10:cout <<"October";
            break;
        case 11:cout <<"November";
            break;
        case 12:cout <<"December";
            break;   
    }
    cout <<","<<year<<endl;
}
int main(){
    Date object1;;
    int day,month,year;
    cout <<"Enter Day: ";
    cin  >>day;
    cout <<"Enter Month: ";
    cin  >>month;
    cout <<"Enter Year: ";
    cin  >>year;
    try{
        object1.setDay(day);
        object1.setMonth(month);
        object1.setYear(year);
        object1.printFormat1();
        object1.printFormat2();
        object1.printFormat3();
    }
    catch(Date::IncalidDay){
        cout <<"Error A month will have 1-30/31 days"<<endl;
    }
    catch(Date::IncalidMonth){
        cout <<"Error There only 12 months in an year"<<endl;
    }
}