#include<bits/stdc++.h>
using namespace std;
int linearsearch(int a[], int size, int key){
    for(int i=0; i<size; i++){
        if(a[i] == key){
            return i+1;      //time complexity of worst case in linear search is O(n).
        }
    }
    return -1;
}
int main(){
    int arr[6]={12, 21, 23 , 32, 33, 43}, key;
    int size = sizeof(arr)/ sizeof(arr[0]);
    cin>> key;
    int found = linearsearch(arr, size, key);
    if(found == -1){
        cout<<"key not found";
    }
    else
        cout<<"key found at "<<found;
}