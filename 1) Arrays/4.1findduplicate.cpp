#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& arr){
    int ans = 0;
    for(int i=0; i<arr.size(); i++){
        ans = ans ^ arr[i];
    }
    for(int i=1; i<arr.size(); i++){
        ans = ans ^ i;
    }
    
    return ans;
}

int main(){
    int size;
    cin >> size;
    vector<int> b(size);
    for (int i = 0; i < size; i++) {
        cin>> b[i];
    }
   cout<< findDuplicate(b);
    return 0;
}
