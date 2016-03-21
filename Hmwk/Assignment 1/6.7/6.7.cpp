
#include <cstdlib>
#include <iostream>

using namespace std;

//Function prototypes
float GetTheFahreheit(float,float);

int main() {
    float Celsius;
    float Fahrenheit;
    cout << "Please Enter the Celsius temperatures: "<<endl;
    cin  >> Celsius;
    cout << "This is the Fahrenheit temperatures: "
            <<GetTheFahreheit(Celsius,Fahrenheit);

    return 0;
}

float GetTheFahreheit(float Celsius,float Fahrenheit){
    Fahrenheit = 9*Celsius/5+32;
    return Fahrenheit;

}