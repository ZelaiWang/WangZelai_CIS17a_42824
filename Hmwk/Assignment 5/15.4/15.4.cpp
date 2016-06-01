#include <iostream>
#include <iomanip>

using namespace std;

class Time{
protected:  int hour;
            int min;
            int sec;
public: Time(){
        hour = 0;
        min = 0;
        sec = 0;
        }
        Time(int h,int m,int s){
        hour = h;
        min = m;
        sec = s;
        }
        int gethour() const{
            return hour;
        }
        int getMin() const{
            return min;
        }
        int getSec() const{
            return sec;
        }
};
class MilTime: public Time{
private:int milHours;
        int milSeconds;
public: MilTime(int hours,int seconds){
        milHours=hours;
        milSeconds=seconds;
        }
        void setTime(int mhours,int mseconds);
        int getHour();
        int getStandHr();
};
void MilTime::setTime(int mhours,int mseconds){
    milHours=mhours;
    mseconds=mseconds;
    hour=(milHours/100);
    min=milHours%100;
    sec=milSeconds;
}
int MilTime::getHour(){
    return milHours;
}
int MilTime::getStandHr(){
    return hour%12;
}
int main(){
    int hr,sec;
    MilTime time1(0,0);
    cout <<"Enter Time in Milatary format:";
    cin  >>hr;
    sec=hr%10;
    time1.setTime(hr,sec);
    cout <<"MillataryFormat:"<<time1.getHour()<<"hours"<<endl;
    if(time1.gethour()/12==1){
        cout <<"Standard Format:"<<time1.getStandHr()<<":";
        if (time1.getMin()==0)
            cout <<time1.getMin()<<"0"<<"PM"<<endl;
        else
            cout <<time1.getMin()<<"PM"<<endl;
    }
    else{
        cout <<"Standard Format:"<<time1.getStandHr()<<":";
        if(time1.getMin()==0)
            cout<<time1.getMin()<<"0"<<"AM"<<endl;
        else
            cout <<time1.getMin()<<"AM"<<endl;
    }
    return 0;
}