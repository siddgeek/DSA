#include<bits/stdc++.h>
using namespace std;
bool uniqueOccurrences(vector<int>& arr) {
            unordered_map<int,int> m;
            for(int i=0;i<arr.size();i++){
                m[arr[i]]++;
            }
            set<int> s;
            for(auto i:m){
                s.insert(i.second);
            }
            if(s.size()!=m.size())return false;
            else return true;
}

int main(){
    int size;
    cin >> size;
    vector<int> b(size);
    for (int i = 0; i < b.size(); i++) {
        cin >> b[i];
    }
    cout<<uniqueOccurrences(b);
    return 0;
}

