
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

//function prototypes
float mean(int*a, int size);
float median(int *a, int size);
int *mode(int *a, int size, int&len);
void printArray(int*a, int size);
int *fillArray(int size, int range);

float mean(int*a, int size) {
    float temp = 0;
    for (int i = 0; i < size; i++)
        temp += *(a + i);
    return temp / (float) size;
}

float median(int *a, int size) {
    quickSort(a, 0, size - 1);
    float temp = 0;
    if (size % 2 == 0) {
        temp = (*(a + (size - 1) / 2)+*(a + (size - 1) / 2 + 1)) / (float) 2;
        return temp;
    } else {
        return a[size / 2 ];
    }
}

int main() {
    int size, range;
    cin >> size>>range;
    int * pArray = fillArray(size, range);
    printArray(pArray, size);
    int len;
    int *mArray = mode(pArray, size, len);
    cout << "mean: " << mean(pArray, size) << endl << "median: " << median(pArray, size)
            << endl << "mode array: ";

    for (int i = 0; i < len; i++)
        cout << mArray[i] << " ";
    cout << endl;

}

int *mode(int *a, int size, int&len) {
    vector<pair<int, int> >v;
    quickSort(a, 0, size - 1);
    int comValue = a[0];
    int count = 1;
    for (int i = 1; i < size; i++) {
        if (a[i] == comValue) {
            count++;
        } else {
            v.push_back(make_pair(comValue, count));
            count = 1;
            comValue = a[i];
        }
    }
    v.push_back(make_pair(comValue, count)); //无法比较的当前数据也要存进去
    sort(v.begin(), v.end(), cmp);
    int frequency = v[v.size() - 1].second;
    count = 1;
    int *temp;
    for (int i = v.size() - 2; i >= 0; i--) {
        if (frequency != v[i].second) {
            len = count + 2;
            temp = new int[len];
            temp[0] = count;
            temp[1] = frequency;
            int index = 0;
            while (count > 0) {
                temp[2 + index] = v[v.size() - count].first;
                count--;
                index++;
            }
            return temp;
        } else {
            count++;
        }
    }
    len = count + 2;
    temp = new int[len];
    temp[0] = count;
    temp[1] = frequency;
    int index = 0;
    while (count > 0) {
        temp[2 + index] = v[v.size() - count].first;
        count--;
        index++;
    }
    return temp;
    cout << "in mod function the len is " << len << endl;
}

void printArray(int*a, int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int *fillArray(int size, int range) {
    srand(static_cast<unsigned int> (time(0)));
    int *p = new int[size];
    for (int i = 0; i < size; i++) {
        *(p + i) = rand() % range + 1;
    }
    return p;
}