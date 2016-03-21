#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//function prototypes
void sortTestScores(int *testScores, int size);
double averageTestScore(int *testScores, int size);
void printTestScores(int *testScores, int size);

int main(){
    int *testScores; // to dynamically allocate an array
    int size;
    int score;
    double average;

    cout << "Enter the size of the array: ";
    cin >> size;
    testScores = new int[size];
    cout << "Enter " << size
    << " positive values for the test scores."
    << endl;
    for(int i = 0; i < size; i++){
        cout << "Score " << (i + 1) << ": ";
        cin >> score;
        while(score < 0){
            cout << "Again: " << (i + 1) << ": ";
            cin >> score;
        } 
        testScores[i] = score;
    } 
    cout << "Test scores before sorting: ";
    printTestScores(testScores, size);
    sortTestScores(testScores, size);
    cout << "Test scores after sorting: ";
    printTestScores(testScores, size);
    average = averageTestScore(testScores, size);
    cout << "Average test score: " << setprecision(2)<< fixed << average << endl;
    cout << endl;
    system("pause");
    return 0;
}
void sortTestScores(int *testScores, int size){
    int *last = testScores + size;
    for(int *start = testScores;
    start < last - 1; start++){
        for(int *next = start + 1; next < last; next++){
            if(*next < *start){
                int temp = *start;
                *start = *next;
                *next = temp;
            } 
        }
    } 
} 
double averageTestScore(int *testScores, int size){
    int sum = 0;
    double average;
    int *current = testScores;
    for(int i = 0; i < size; i++){
        sum += *current;
        current++;
    } 
    average = (double) sum / size;
    return average;
} 
void printTestScores(int *testScores, int size){
    int *current = testScores;
    for(int i = 0; i < size; i++){
        cout << *current << " ";
        current++;
    } 
    cout << endl;
} 