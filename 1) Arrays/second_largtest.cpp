#include<bits/stdc++.h>
using namespace std;

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