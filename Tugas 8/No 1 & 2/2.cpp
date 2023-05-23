//Insertion Sort
//Yutase Jordan Amrullah
//A11.2022.14505

#include "iostream"
using namespace std;

int *SortDsc(int arr[], int len);

int main(){
    int arr[]= {5,4,3,2,2,1,1};
    int len = 7;
    int* new_arr = SortDsc(arr,len);

    for (int i = 0; i < len; i++){
        cout<<new_arr[i] <<endl;
    }
}

int* SortDsc(int arr[], int len){
    for(int step = 1; step < len; step++){
        int key = arr[step];
        int j = step - 1;

        while(key > arr[j] && j >= 0 ){
            arr[j+1] = arr[j];
            -j;
        }
        arr[j+1] = key;
    }
    return arr;
}
