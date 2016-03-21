
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

//function prototypes
double median_value(int *arrptr,int n);

int main() {
    int *array=new int[20];
    int i,n;
    double Median;
    cout<<"Enter size of array: ";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>*(array+i);
    }
    Median=median_value(array,n);
    cout<<"Median is: "<<Median;
    system("pause");
}
double median_value(int *arrptr,int n){
    double median;
    if(n%2==0){
        median=(*(arrptr+(n/2))+*(arrptr+(n/2+1)))/2;
    }
    else{
        median=*(arrptr+(n/2));
    }
    return median;
}
