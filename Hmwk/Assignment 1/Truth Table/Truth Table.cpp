#include <iostream>
#include <iomanip>

using namespace std;
//Function prototypes
void decide(bool,bool);

int main() {
    cout << setw(10) <<"X : T , Y : T"<<endl;
    decide(true,true);
    cout << endl;
    cout << setw(10) <<"X : F , Y : F"<<endl;
    decide(false,false);
    cout << endl;
    cout << setw(10) <<"X : T , Y : F"<<endl;
    decide(true,false);
    cout << endl;
    cout << setw(10) <<"X : F , Y : T"<<endl;
    decide(false,true);
    cout << endl;
    return 0;
}
void decide(bool x,bool y){
    cout <<left;
    cout <<setw(10)<<"X"       <<((x)?"T":"F")      <<endl;
    cout <<setw(10)<<"Y"       <<((y)?"T":"F")      <<endl;
    cout <<setw(10)<<"!X"      <<((!x)?"T":"F")     <<endl;
    cout <<setw(10)<<"!Y"      <<((!y)?"T":"F")     <<endl;
    cout <<setw(10)<<"X&&Y"    <<((x&&y)?"T":"F")   <<endl;
    cout <<setw(10)<<"X||Y"    <<((x||y)?"T":"F")   <<endl;
    cout <<setw(10)<<"X^Y"     <<((x^y)?"T":"F")    <<endl;
    cout <<setw(10)<<"X^Y^Y"   <<((x^y^y)?"T":"F")  <<endl;
    cout <<setw(10)<<"X^Y^X"   <<((x^y^x)?"T":"F")  <<endl;
    cout <<setw(10)<<"!(X||Y)" <<((!(x||y))?"T":"F")<<endl;
    cout <<setw(10)<<"!X&&!Y"  <<((!x&&!y)?"T":"F") <<endl;
    cout <<setw(10)<<"!(X&&Y)" <<((!(x&&y))?"T":"F")<<endl;
    cout <<setw(10)<<"!X||!Y"  <<((!x||!y)?"T":"F") <<endl;
}
