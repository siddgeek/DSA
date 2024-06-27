#include<bits/stdc++.h>
using namespace std;

int findUnique(int arr[], int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}
int main(){
    int size;
    cin >> size;
    int b[size];
    for (int i = 0; i < size; i++) {
        cin >> b[i];
    }
    cout<<findUnique(b, size);
    return 0;
}
