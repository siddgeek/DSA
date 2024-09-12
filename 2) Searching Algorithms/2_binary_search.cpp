//binary search only applicable in array when the elements are in ascending order or descending order.

#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int size, int key){
    int start = 0, end = size - 1;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }                               // time complexity of binary search in O(log N).
        if(key > arr[mid]){
            start = mid + 1;
        }else
            end = mid - 1;
        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){
    int ar[6]={12, 21, 23 , 32, 33, 43}, key;
    cin>>key;

    int size = sizeof(ar)/sizeof(ar[0]);
    int found = binarysearch(ar, size, key);

    if(found == -1){
        cout<<"key not found";
    }
    else
        cout<<"key found at "<<found;

    return 0;
}