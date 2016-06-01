
#include <iostream>

using namespace std;

template <class T>
T Maximum(T arg1,T arg2){
    if(arg1>arg2)
        return arg1;
    else
        return arg2;
}

template <class T>
T Minimum(T arg1,T arg2){
    if(arg1<arg2)
        return arg1;
    else
        return arg2;
}

int main(){
    int num1,num2;
    int large,small;
    
    cout <<"Enter First Value:";
    cin  >>num1;
    cout <<"Enter Second Value:";
    cin  >>num2;
    
    large=Maximum(num1,num2);
    small=Minimum(num1,num2);
    
    cout <<"Largest of two is: "<<large<<endl;
    cout <<"Smallest of two is: "<<small<<endl;
    return 0;
}