
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    float Celsius;
    float Fahrenheit;
    cout << "Please Enter the Celsius temperatures: "<<endl;
    cin  >> Celsius;
    Fahrenheit = 9*Celsius/5+32;
    cout << "This is the Fahrenheit temperatures: "<< Fahrenheit;

    return 0;
}

