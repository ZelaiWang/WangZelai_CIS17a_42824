
#include <iostream>
#include <cmath>

using namespace std;

template <class T>
T AbsoluteValue(T var){
    return abs(var);
}

int main(){
    int num;
    int absValue;
    cout <<"Enter value:";
    cin  >>num;
    absValue=AbsoluteValue(num);
    cout<<"Absolute value is:"<<absValue<<endl;
    return 0;
}