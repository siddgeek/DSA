#include<bits/stdc++.h>
using namespace std;

int findSecondLargest(int n, vector<int> &arr)
{
     int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    // If no second largest is found, return -1
    if (secondLargest == INT_MIN)
        return -1;
}    

int findSecondlar(vector<int> v){
    int largest = 1;      
    for(int i=0; i<v.size()-1; i++){
        if(v[i] > largest){
            largest = v[i];
        }
    }
    int secondLargest = -1;
    for(int i=0; i<v.size()-1; i++){
        if(v[i] > secondLargest && secondLargest != largest){
            secondLargest = v[i];
        }
    }

    return secondLargest;
}
 
int main(){
    int size;
    cin >> size;
    vector<int> b(size);
    for (int i = 0; i < size; i++) {
        cin>> b[i];
    }
   cout<< findSecondlar(b);
    return 0;
}