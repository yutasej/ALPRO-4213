#include <iostream>
#include <ctime>
using namespace std;

// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform selection sort
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(&arr[i], &arr[minIndex]);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {-2, 45, 0, 11, -9};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array:\n";
    printArray(arr, size);

    // Start the timer
    clock_t start = clock();

    selectionSort(arr, size);

    // End the timer
    clock_t end = clock();

    double timeTaken = double(end - start) / CLOCKS_PER_SEC;

    cout << "Sorted Array in Ascending Order:\n";
    printArray(arr, size);

    cout << "Time taken by Selection Sort: " << timeTaken << " seconds" << endl;

    return 0;
}
