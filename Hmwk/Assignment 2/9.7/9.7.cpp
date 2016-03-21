
#include <cstdlib>
#include <iostream>
using namespace std;

//function prototypes
void arrSelectSort(int *[],int);
void showArray(int [] ,int);
void showArrPtr(int *[],int);

void main() {
    const int NUM_DONATIONS=15
    int donations[NUM_DONATIONS]={5,100,5,25,10,5,25,5,5,100,10,15,10,5,10};
    int *arrPtr[NUM_DONATIONS];
    for(int i=0;i<NUM_DONATIONS;i++)
        arrPtr[i]=&donations[i];
    arrSelectSort(arrPtr,NUM_DONATIONS);
    cout<<"The Donations in Sorted Ascending order";
    showArrPtr(arrPtr,NUM_DONATIONS);
    cout<<"The donations in the Order";
    showArray(donations,NUM_DONATIONS);
    system("pause");
}
void arrSelectSort(int *arr[],int size){
    int startScan,minIndex;
    int *minElem;
    for(startScan=0;startScan<(size-1);startScan++){
        minIndex=startScan;
        minElem=arr[startScan];
        for(int index=startScan+1;index<size;index++){
            if(*(arr[index])>*minElem){
                minElem=arr[index];;
                minIndex=index;
            }
        }
        arr[minIndex]=arr[startScan];
        arr[startScan]=minElem;
    }
}

void showArray(int arr[],int size){
    for(int count = 0;count<size;count++)
        cout<<arr[count];
    cout<<endl;
}
