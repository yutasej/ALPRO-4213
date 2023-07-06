#include <iostream>
#include <ctime>
using namespace std;

// Function to perform sequential search
int sequentialSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Return the index if target is found
        }
    }
    return -1;  // Return -1 if target is not found
}

int main() {
    int arr[] = {3, 9, 4, 2, 7, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    // Start the timer
    clock_t start = clock();

    int index = sequentialSearch(arr, size, target);

    // End the timer
    clock_t end = clock();

    double timeTaken = double(end - start) / CLOCKS_PER_SEC;

    if (index != -1) {
        cout << "Target found at index " << index << endl;
    } else {
        cout << "Target not found" << endl;
    }

    cout << "Time taken by Sequential Search: " << timeTaken << " seconds" << endl;

    return 0;
}
