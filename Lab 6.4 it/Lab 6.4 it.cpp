#include <iostream>
#include <cmath>
#include <random>
using namespace std;

void printArray(int* array, int size);
void generateArray(int* arr, int size, int min, int max);
int MaxElement(int a[], const int size);
int Sum(int a[], const int size);
void ModArray(int a[], int size, int aval, int bval);

int main() {
    srand((unsigned)time(NULL));
    int n = 5;
    int* p = new int[n];
    generateArray(p, 5, -10, 10);


    cout << "Array Elements: ";
    printArray(p, n);
    cout << endl;

    cout << "MaxNumber: ";
    int max = MaxElement(p, n);
    cout << max << endl;

    int NewSum = Sum(p, n);
    cout << "Start Sum: " << NewSum << endl;

    int fnum, snum;

    cout << "type num: ";  cin >> fnum;
    cout << "type second num: ";  cin >> snum;

    ModArray(p, n, fnum, snum);
    cout << "\nModified: ";

    printArray(p, n);

    return 0;
}


void printArray(int* array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}

void generateArray(int* arr, int size, int min, int max) {
    srand(time(0));
    for (int i = 0; i < size; i++) {
        arr[i] = min + rand() % (max - min + 1);
    }
}

int MaxElement(int a[], const int size) {
    if (size == 0) {
        return 0;
    }

    int max = a[0];

    for (int i = 1; i < size; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    return max;
}

int Sum(int a[], const int size) {
    int sum = 0;
    int index = -1;

    for (int i = 0; i < size; i++) {
        if (a[i] > 0) {
            index = i;
        }
        if (index == -1) {
            sum += a[i];
        }
    }

    return sum;
}

void ModArray(int a[], int size, int aVal, int bVal) {
    int newSize = size;
    for (int i = 0; i < newSize; i++) {
        if (abs(a[i]) >= aVal && abs(a[i]) <= bVal) {
            for (int j = i; j < newSize - 1; j++) {
                a[j] = a[j + 1];
            }
            newSize--;
            i--;
        }
    }

    for (int i = newSize; i < size; i++) {
        a[i] = 0;
    }

    size = newSize;
}