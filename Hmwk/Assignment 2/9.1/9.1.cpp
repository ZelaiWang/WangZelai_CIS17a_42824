
#include <cstdlib>
#include <iostream>
using namespace std;

//function prototypes
int *getDynamicArray(int);
int main(){
    int numberOfElements;
    int *arrayPointer;
    cout << "Enter the number of elements: ";
    cin >> numberOfElements;
    arrayPointer = getDynamicArray(numberOfElements);
    cout << "The elements in the dynamic array: ";
    for(int i = 0; i < numberOfElements; i++)
    cout << *(arrayPointer + i) << " ";
    cout << endl;
    delete [] arrayPointer;
    return 0;
}

int *getDynamicArray(int numOfElmnts){
    int *arrayPtr = new int[numOfElmnts];
    for(int i = 0; i < numOfElmnts; i++){
        cout << "Enter the element " << (i + 1) << ": ";
        cin >> *(arrayPtr + i);
    } 
    return arrayPtr;
} 
