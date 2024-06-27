#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int size) {
    for (int i = 0; i < size; i += 2) { // Fixed increment
        if (i + 1 < size) {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main() {
    int size;
    cin >> size;
    int b[size];
    for (int i = 0; i < size; i++) {
        cin >> b[i];
    }
    printArray(b, size);
    swapAlternate(b, size); // Corrected function call
    printArray(b, size);
    return 0;
}
