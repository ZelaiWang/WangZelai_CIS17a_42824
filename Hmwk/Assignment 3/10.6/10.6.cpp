#include <cstdlib>
#include <string>
#include<cstring>
#include<iostream>
#include <vector>
#include<ctype.h>
#include<fstream>
using namespace std;
int Vowel_count(char *str);
int Consonant_count(char *str);

int main(){
    char String[30];
    char choice;
    int Nvowels;
    int Nconsonant;
    cout<<"Enter a string: ";
    cin.getline(String,30);
    do{
        cout<<"\nMENU"<<endl;
        cout<<" (A) Count the number of vowels in the string"<<endl;
        cout<<" (B) Count the number of Cinsonants in the string"<<endl;
        cout<<" (C) Count both the vowels and consonants in the string"<<endl;
        cout<<" (D) Enter anther string"<<endl;
        cout<<" (E) Exit program"<<endl;
        cout<<"Enter choice";
        cin >>(choice);
        switch(choice){
            case 'A':
                Nvowels = Vowel_count(String);
                cout<<"Number of vowels is:"<<Nvowels<<endl;
                break;
            case 'B':
                Nconsonant = Consonant_count(String);
                cout<<"Number of Consonant is: "<<Nconsonant<<endl;
                break;
            case 'C':
                Nvowels = Vowel_count(String);
                Nconsonant = Consonant_count(String);
                cout<<"Number of vowels is: "<<Nvowels<<endl;
                cout<<"Number of Consonant is: "<<Nconsonant<<endl;
                break;
            case 'D':
                cout<<"Enter anther String: ";
                fflush(stdin);
                cin.getline(String,30);
                break;
            case 'E':
                exit(0);
                break;
        }
    }while(choice != 'E');
    return 0;
}
int Vowel_count(char *str){
    int count = 0;
    while(*str!='\0'){
        if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u')
            count++;
            str++;
    }
    return count;
}
int Consonant_count(char *str){
    int count = 0;
    while(*str!='\0'){
    if(*str!='a'&&*str!='e'&&*str!='i'&&*str!='o'&&*str!='u')
        count++;
        str++;
}
return count;
}


