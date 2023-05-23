//Selection Sort
//Yutase Jordan Amrullah
//A11.2022.14505

#include "iostream"
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void PrintArray(int array[], int size){
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

void selectionSort(int array[], int size){
    for(int step = 0; step < size; step++){
        for(int i = step + 1;i < size;i++){
            if(array[i] > array[step])swap(&array[i],&array[step]);
        }
    }
}

int main(){
    int data[] = {22, 12, 13, 15, 4};
    int size = sizeof(data) / sizeof(data[0]);
    selectionSort(data, size);
    cout << "Sorting Array Descending : \n";
    PrintArray(data, size);
}
