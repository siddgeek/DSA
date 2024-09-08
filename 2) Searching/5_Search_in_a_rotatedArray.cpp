#include <iostream>
#include <vector>
using namespace std;

// Function to find the pivot point in a rotated sorted array
int pivot(vector<int>& arr, int n){
    int s = 0, e = n-1;
    int mid = s + (e - s) / 2;
    while(s < e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        } else {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

// Binary search function
int binarysearch(vector<int>& arr, int s, int e, int key){
    int start = s, end = e;
    int mid = start + (end - start) / 2;
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }                              
        if(key > arr[mid]){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

// Search function using pivot and binary search
int search(vector<int>& arr, int n, int k){
    int pivott = pivot(arr, n);
    if(k >= arr[pivott] && k <= arr[n-1]){
        return binarysearch(arr, pivott, n-1, k);
    } else {
        return binarysearch(arr, 0, pivott-1, k);
    }
}

// Main function
int main() {
    vector<int> arr = {7, 9, 1, 2, 3}; // Example of a rotated sorted array
    int n = arr.size();  // Size of the array

    int target;
    cout << "Enter the target element to search: ";
    cin >> target;  // Input target value

    // Call the search function
    int result = search(arr, n, target);

    // Print the result
    if (result != -1) {
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}
