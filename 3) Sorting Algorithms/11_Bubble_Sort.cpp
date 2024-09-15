#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 0; i < n - 1; i++) {
        // Last i elements are already in place
        for(int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
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
    bubbleSort(arr, n);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
