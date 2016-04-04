#include <cstdlib>
#include <string>
#include<cstring>
#include<iostream>
#include <vector>
#include<ctype.h>
#include<fstream>

using namespace std;
void numberWords(char*);
int main() {
    cout << "input a string" << endl;
    string s;
    getline(cin, s);
    int len = s.length();
    char *c = new char[len];
    strcpy(c, s.c_str());
    numberWords(c);
}

void numberWords(char* c) {
    vector<int>v;
    int len = strlen(c);
    int temp = 0;
    int counter = 1;
    for (int i = 0; i < len; i++) {
        if (c[i] == ' ') {
            counter++;
            v.push_back(i - temp);
            temp = i + 1;
            while(c[i+1]==' '){
                i++;
                temp++;
            }
        }
    }
    v.push_back(len - temp);

    int counter1 = 0;
    for (int i = 0; i < v.size(); i++) {
        counter1 += v[i];
    }
    cout << endl;
    
    cout << counter << " words, and the average letters is " << counter1 / (double) v.size() << endl;
   
}