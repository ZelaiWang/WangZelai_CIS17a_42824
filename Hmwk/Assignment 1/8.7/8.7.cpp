#include <iostream>
#include <string>
using namespace std;

int main(){

    const int NUM_NAMES = 6;
    string names[NUM_NAMES] ={"Collins, Bill", "Smith, Bart", "Allen, Jim", 
                              "Griffin, Jim","Stamey, Marty", "Rose, Geri", };
//                              "Taylor, Terri", "Johnson, Jill","Allison, Jeff", 
//                              "Looney, Joe", "Wolfe, Bill", "James, Jean",
//                              "Weaver, Jim", "Pore, Bob", "Rutherford, Greg", 
//                              "Javens, Renee","Harrison, Rose", "Setzer, Cathy", 
//                              "Pike, Gordon", "Holland, Beth"};

    // Insert your code to complete this program

    int i,j;
    string temp;
    for(i=0;i<NUM_NAMES-1;i++){
        for(j=i+1;j<NUM_NAMES;j++){
            if(names[i] > names[j]){
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
    for(int i=0;i<6;i++)
        cout<<names[i]<<endl;
    

    string target,last,first;
    cout <<"Enter the last name: ";
    cin  >> last;
    cout <<"Enter the first name: ";
    cin  >> first;
    target = last + ", " + first;

    //cout << target << endl;
    int low = 0, mid, high = NUM_NAMES-1;
    while (low < high){
        mid = (low + high) / 2;
        if (target < names[mid])
            high = mid - 1;
        else{
            if (target > names[mid])
                low = mid + 1;
            else
                low = high + 1;
        }
    }
    if (target == names[mid])
        cout <<"Found\n";
    else
        cout <<"Not found\n";
    return 0;

}