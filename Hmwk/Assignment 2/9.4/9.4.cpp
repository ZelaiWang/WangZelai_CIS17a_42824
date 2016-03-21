
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

//function prototypes
float Average(int *scores,int number);
void SortTestScores(int *scores,string *Names,int n);

int main(){
    int *testScores=new int[50];
    string *Names=new string[50];
    float averageScore;
    int number,i;
    cout<<"Enter number of test Scores: ";
    cin>>number;
    for(i=0;i<number;i++){
        cout<<"Enter name: ";
        cin>>Names[i];
        cout<<"Enter Test Scores: ";
        cin>>testScores[i];
    }
    SortTestScores(testScores,Names,number);
    cout<<"Name \t"<<"TestScore"<<endl;
    for(i=0;i<number;i++){
        cout<<Names[i]<<"\t";
        cout<<testScores[i]<<endl;
    }
    averageScore=Average(testScores,number);
    cout<<"Average testScore is: "<<averageScore<<endl;
    system("pause");
}//End of main

void SortTestScores(int *scores,string *Names,int number){   
    int temp;
    string tempname;
    int i,j;
    for(i=0;i<number;i++){
        for(j=0;j<number;j++){
            if(scores[j]>scores[j+1]){
                temp=scores[j];
                scores[j]=scores[j+1];
                scores[j+1]=temp;
                tempname=Names[j];
                Names[j]=Names[j+1];
                Names[j+1]=tempname;
            }
        }
    }
}
float Average(int *score,int n){
    int i;
    float avg=0.0;
    for(i=0;i<n;i++){
        avg+=score[i];
    }
    avg=avg/n;
    return avg;
}
