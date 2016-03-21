#include<iostream>
#include<iomanip>
using namespace std;


int main(){	
    int days;       //number of days the population will increase
    float increase; //percentage of increase each day
    float size;     //starting size of population

    cout << "Please enter the starting size of the population: ";
    cin  >> size;
    //if the user enters a number less than 2, ask for a number larger than 1
    while(size < 2){
        cout << "Please enter the number larger or equal than 2: ";
        cin  >> size;
    }

    cout << "\nPlease enter the average daily increase: ";
    cin  >> increase;
    //if the user enters a negative percentage, ask for a postive percentage
    while(increase < 0.0){
        cout << "Please enter a pastive number: ";
        cin  >> increase;
    }

    cout << "\nPlease enter the days will increase(integer): ";
    cin  >> days;
    //if user enters a number less than 1, ask for a number larger than 0
    while(days < 1){//(days % 1 != 0)???????
        cout <<"Please enter a integer larger than zero: ";
        cin  >> days;
    }

    for (int count = 1; count <= days; count++){
        size = size * (increase + 1);//the final result after the growth
        cout << "\nDay " << count << endl;
        cout << setprecision(0) << fixed<< "Population Size: " << size << endl;
    }

return 0;
}