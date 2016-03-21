
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

//function prototypes
int doSomething(int *x,int*y);

int main(){
    int x = 10, y = 5;
    cout<<"x,y values before function call: "<<x<<" "<<y<<endl;
    cout<<"Result: "<<doSomething(&x,&y)<<endl;
    cout<<"x,y value after function call: "<<x<<" "<<y<<endl;
    system("pause");
}
int doSomething(int *x,int*y){
    int temp=*x;
    *x=*(y)*10;
    *y=temp*10;
    return *x+*y;
}