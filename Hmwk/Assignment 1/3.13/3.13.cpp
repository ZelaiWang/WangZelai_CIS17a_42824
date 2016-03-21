
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    const float YEN_PER_DOLLAR = 113.94;
    const float EUROS_PER_DOLLAR = 0.92;
    float DOLLAR;
    float YEN;
    float EUROS;
  
    cout <<"Please enter the dollar amounts that you want to convert: "<<endl;
    cin  >>DOLLAR;
    
    YEN = DOLLAR * YEN_PER_DOLLAR;
    EUROS = DOLLAR * EUROS_PER_DOLLAR;
    cout << setprecision(2) << fixed;
    cout <<"This dollar amount = "<<YEN<<" YEN"<<endl;
    cout <<"This dollar amount = "<<EUROS<<" EUROS"<<endl;

    return 0;
}

