
#include <cstdlib>
#include <iostream>
using namespace std;

//function prototypes
void sortedTestScores(double *, int);
double calculateAverateTestScore(double *, int);
void showTestScores(double *, int);
// start main function
int main(){
    int numberOfTestScores;
    double *testScores;
    double averageTestScore;
    cout << "Enter the number of test scores: ";
    cin >> numberOfTestScores;
    testScores = new double[numberOfTestScores];
    for(int i = 0; i < numberOfTestScores; i++){
        cout << "Enter test score " << (i + 1) << ": ";
        cin >> *(testScores + i);
        while(*(testScores + i) < 0){
            cout << "Enter a positive score: ";
            cin >> *(testScores + i);
        } 
    } 
    sortedTestScores(testScores, numberOfTestScores);
    cout << "The test scores in ascending order: ";
    showTestScores(testScores, numberOfTestScores);
    averageTestScore = calculateAverateTestScore(testScores, numberOfTestScores);
    cout << "The average test score after dropping the lowest test score from the array is: "
    << averageTestScore << endl;
    delete [] testScores;
    system("pause");
    return 0;
}
void sortedTestScores(double *scores, int numberOfScores){
    double smallestScore;
    int smallestIndex;
    for(int i = 0; i < numberOfScores - 1; i++){
        smallestScore = *(scores + i);
        smallestIndex = i;
        for(int j = i + 1; j < numberOfScores; j++){
            if(smallestScore > *(scores + j)){
                smallestScore = *(scores + j);
                smallestIndex = j;
            } 
        } 
        *(scores + smallestIndex) = *(scores + i);
        *(scores + i) = smallestScore;
    }
} 
double calculateAverateTestScore(double *scores, int numberOfScores){
    double sumOfTestScores = 0.0;
    double avgTstScr;
    for(int i = 1; i < numberOfScores; i++)
        sumOfTestScores += *(scores + i);
    avgTstScr = sumOfTestScores / (numberOfScores - 1);
    return avgTstScr;
} 
void showTestScores(double *scores, int numberOfScores){
    for(int i = 0; i < numberOfScores; i++)
        cout << *(scores + i) << " ";
    cout << endl;
}