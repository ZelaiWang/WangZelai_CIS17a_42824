#include <cstdlib>
#include <string>
#include<cstring>
#include<iostream>
#include <vector>
#include<ctype.h>
#include<fstream>
using namespace std;

int main(int argc, char** argv) {
    char ch;
    fstream fin,fout;
    fin.open("input.txt",ios::in);
    fout.open("output.txt",ios::out);
    while(!fin.eof()){
        fin.get(ch);
        fout.put(toupper(ch));
        fin.get(ch);
        while(ch!='.'){
            fout.put(tolower(ch));
            fin.get(ch);
        }
        fin.get(ch);
        fout<<endl;
    }
    fin.close();
    fout.close();
    return 0;
}

