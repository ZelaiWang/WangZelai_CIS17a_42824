
#include <cstdlib>
#include <iostream>
using namespace std;

//function prototypes
void arrSelectSort(int *[],int);
void showArray(int*,int);
void showArrPtr(int *[],int);

int main() {
    const int NUM_DONATIONS=15;
    int *donations=new int[NUM_DONATIONS];
    int *arrPtr[NUM_DONATIONS];
    cout<<"Enter Donations:";
    for(int i=0;i<NUM_DONATIONS;i++){
        cin>>*(donations+1);
    }
    arrSelectSort(arrPtr,NUM_DONATIONS);
    cout<<"The Donations in Sorted Ascending order";
    showArrPtr(arrPtr,NUM_DONATIONS);
    cout<<"The Donations in the order";
    showArray(donations,NUM_DONATIONS);
    return 0;
}
void arrSelectSort(int*arr[],int size){
    int startScan,minIndex;
    int *minElem;
    for(startScan=0;startScan<(size-1);startScan++){
        minIndex=startScan;
        minElem=arr[startScan];
        for(int index=startScan+1;index<size;index++){
            if(*(arr[index])<*minElem){
                minElem=arr[index];
                minIndex=index;
            }
        }
        arr[minIndex]=arr[startScan];
        arr[startScan]=minElem;
    }
}

void showArrPtr(int *arr[],int size){
    for(int count=0;count<size;count++)
        cout<<*(arr[count])<<" ";
    cout<<endl;
}
void showArray(int *arr,int size){
    for(int count=0;count<size;count++)
        cout<<*(arr+count);
    cout<<endl;
}