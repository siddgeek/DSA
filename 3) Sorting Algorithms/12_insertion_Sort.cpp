#include <iostream>
#include <vector>
using namespace std;

void InsertionSort(vector<int>& arr, int n)
{   
    for(int i=1 ; i<n; i++){
        int temp = arr[i], j;
        for(j=i-1; j>=0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
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
    InsertionSort(arr, n);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
