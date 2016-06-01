
#include <iostream>

using namespace std;

template <class T>
T Total(T n){
    T total=0,num;
    int i;
    for(i=0;i<n;i++){
        cout <<"Enter "<<i+1<<" values:";
        cin  >>num;
        total+=num;
    }
    return total;
}
int main(){
    int n;
    cout <<"Enter the number of values you want add:";
    cin  >>n;
    cout <<"Total of all values:"<<Total(n)<<endl;
    return 0;
}