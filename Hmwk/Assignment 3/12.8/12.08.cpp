
#include <cstdlib>
#include <string>
#include<cstring>
#include<iostream>
#include <vector>
#include<ctype.h>
#include<fstream>

using namespace std;
void arrayToFile(char*, int*, int);
void fileToArray(char*, int*, int);
int main() {
    const int SIZE = 10;
    int numbers[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int number[SIZE];
    arrayToFile("input12_8.dat", numbers, SIZE);
    fileToArray("input12_8.dat", number, SIZE);
}

void arrayToFile(char*name, int*a, int len) {
    fstream fs;
    fs.open(name, ios::out | ios::binary);
    fs.write(reinterpret_cast<char*> (a), sizeof (a) * len / 2);
    fs.close();
}

void fileToArray(char* name, int b[], int len) {
    fstream fs;
    fs.open(name, ios::in | ios::binary);
    fs.read(reinterpret_cast<char*> (b), sizeof (b) * len / 2);
    fs.close();
    for (int i = 0; i < len; i++)
        cout << b[i] << " ";
    cout << endl;
}