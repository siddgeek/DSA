#include<bits/stdc++.h>
using namespace std;

void findDuplicate(vector<int>& arr){
    unordered_set<int> seen;
    unordered_set<int> duplicates;

    for(auto num: arr){
        if(seen.find(num) != seen.end()){
            duplicates.insert(num);
        }
        else{
            seen.insert(num);
        }
    }

    if(duplicates.empty()){
        cout<<"NO Duplicates found";
    }
    else{
        for(auto num: duplicates){
            cout<< num<<" ";
        }
        cout<<endl;
    }

}

int main(){
    int size;
    cin >> size;
    vector<int> b(size);
    for (int i = 0; i < size; i++) {
        cin>> b[i];
    }
    findDuplicate(b);
    return 0;
}
