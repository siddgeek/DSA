#include<bits/stdc++.h>
using namespace std;
int pivot(int arr[], int size){
    int s = 0, e = size - 1;
    int mid = s + (e-s)/2;
    while(s < e){
    if(arr[mid] >= arr[0]){
        s = mid + 1;
    }else{
        e = mid;
    }
    mid = s + (e-s)/2;
    } 
    return arr[s];
}
int main(){
    int arr[5]={3, 8, 10, 17, 1 };
    cout<<" pivot element is "<<pivot(arr, 5)      ;
    return 0;
}