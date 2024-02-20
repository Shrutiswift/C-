#include "bits/stdc++.h"
using namespace std;
void insertsort(int arr[], int size){
    int temp, j, i;
    for(i = 0; i < size; i++){
        temp = arr[i];
        j = i-1;
        while(j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j = j -1;
        }
        arr[j + 1] = temp;
    }
    cout << "Ascending order: ";
    for(int i = 0; i < size; i++){
        cout  << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int a, size;
    cout << "Enter the elements to be sorted: ";
    cin >> a;
    int arr[a];
    for(int i = 0; i < a; i++){
        cin >> arr[i];
    }
    insertsort(arr, a);
    return 0;
}
