#include <iostream>
#include <ctime>
using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;  // Return the index if target is found
        } else if (arr[mid] < target) {
            low = mid + 1;  // Target is in the right half
        } else {
            high = mid - 1;  // Target is in the left half
        }
    }
    return -1;  // Return -1 if target is not found
}

int main() {
    int arr[] = {2, 4, 5, 7, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    // Start the timer
    clock_t start = clock();

    int index = binarySearch(arr, 0, size - 1, target);

    // End the timer
    clock_t end = clock();

    double timeTaken = double(end - start) / CLOCKS_PER_SEC;

    if (index != -1) {
        cout << "Target found at index " << index << endl;
    } else {
        cout << "Target not found" << endl;
    }

    cout << "Time taken by Binary Search: " << timeTaken << " seconds" << endl;

    return 0;
}
