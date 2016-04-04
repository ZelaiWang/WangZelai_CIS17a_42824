#include <cstdlib>
#include <string>
#include<cstring>
#include<iostream>
#include <vector>
#include<ctype.h>
#include<fstream>
using namespace std;
struct company{
    string DivisionName;
    int Quarter[4];
    float QuarterltSales[4];
};
int main(int argc, char** argv) {
    company c;
    fstream fout("sale.txt",ios::out|ios::binary);
    if(!fout){
        cout<<"Error :Opening a file\n";
    }
    for(int i=0;i<4;i++){
        cout<<"Enter Division name: "<<endl;
        cin >>c.DivisionName;
        for(int j=0;j<4;j++){
            do{
                cout<<"Enter Quarter Number"<<endl;
                cin >>c.Quarter[i];
                cout<<"Enter Quarter sales "<<endl;
                cin >>c.QuarterltSales[i];
            }while(c.QuarterltSales[i]<0);
        }
//        fout.write(reinterpret_case<char*>(&c),sizeof(c));
    }
    fout.close();
    return 0;
}

