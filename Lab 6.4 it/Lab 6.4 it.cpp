#include <iostream>
#include <cmath>
#include <random>
#include <iomanip>
using namespace std;

void printArray(int* array, int size);
void generateArray(int* arr, int size, int min, int max);
int multPairElements(int* arr, int size);
void printModifiedArray(int* array, int size);
int sumOfArrayElements(int* arr, int size, int sum);
void QuickSortModified(int* arr, int left, int right);
void swap(int& a, int& b);

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    int n;
    cout << "n: "; cin >> n;
    int* p = new int[n];
    generateArray(p, n, -10, 10);

    cout << "ArrayElements                     : ";
    printArray(p, n);
    cout << endl;

    int multipleOfPairElements = multPairElements(p, n);
    cout << "Multiply of pair elements in array: " << multipleOfPairElements << endl;


    int Sum = sumOfArrayElements(p, n, 0);
    cout << "Sum of array elements             : " << Sum;
    cout << endl;

    QuickSortModified(p, 0, n - 1);
    cout << "Sorted Array                      : ";
    

    printModifiedArray(p, n);

    delete[] p;
    return 0;
}


void printArray(int* array, int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(2) << array[i] << " ";
    }
}

void generateArray(int* arr, int size, int min, int max) {
    srand(time(0));
    for (int i = 0; i < size; i++) {
        arr[i] = min + rand() % (max - min + 1);
    }
}

void printModifiedArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(2) << arr[i] << " ";
    }
    cout << endl;
}

int multPairElements(int* arr, int size) {
    int multOfPairElemets = 1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            arr[i] = 1; 
        }
        if (i % 2 == 0) {
            multOfPairElemets *= arr[i];
        }
    }
    return multOfPairElemets;
}

int sumOfArrayElements(int* arr, int size, int sum) {
    for (int i = 0; i < size; i++) {
        if (i != 0 && i != size - 1) {
            sum += arr[i];
        }
    }
    return sum;
}


void QuickSortModified(int* arr, int left, int right) {
    int i = left, j = right;
    int pivot = arr[(left + right) / 2];
    int temp; // Змінна для обміну

    while (i <= j) {
        while (arr[i] > pivot) // Пошук першого додатнього елемента
            i++;
        while (arr[j] < pivot) // Пошук першого від'ємного елемента
            j--;
        if (i <= j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    if (left < j)
        QuickSortModified(arr, left, j);
    if (i < right)
        QuickSortModified(arr, i, right);
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}