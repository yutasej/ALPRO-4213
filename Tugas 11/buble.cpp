#include <iostream>
#include <ctime>
using namespace std;

// perform bubble sort
void bubbleSort(int array[], int size) {
  // loop to access each array element
  for (int step = 0; step < size; ++step) {
    // loop to compare array elements
    for (int i = 0; i < size - step - 1; ++i) {
      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1]) {
        // swapping elements if elements
        // are not in the intended order
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

// print array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main() {
  int data[] = {-2, 45, 0, 11, -9};
  int size = sizeof(data) / sizeof(data[0]);

  // Start the timer
  clock_t start = clock();

  bubbleSort(data, size);

  // End the timer
  clock_t end = clock();

  double timeTaken = double(end - start) / CLOCKS_PER_SEC;

  cout << "Sorted Array in Ascending Order:\n";
  printArray(data, size);

  cout << "Time taken by Bubble Sort: " << timeTaken << " seconds" << endl;

  return 0;
}
