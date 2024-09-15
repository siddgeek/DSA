#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int>& arr) {
    int n = arr.size(); // Fix: define n as the size of the vector
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap(arr[min_index], arr[i]);
    }
}

int main() {
    vector<int> arr; 
    int n, x;
    
    // Take number of elements input
    cout << "Enter number of elements: ";
    cin >> n;

    // Read the elements into the vector
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr.push_back(x);
    }

    // Sort the array
    selection_sort(arr);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
