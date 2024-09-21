#include<bits/stdc++.h>
using namespace std;
int main(){
    array<int, 4> a = {1, 2, 3, 4};
    int size = a.size();
    for(int x: a){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"Front"<<" "<<a.front()<<endl;
    cout<<"Back"<<" "<<a.back()<<endl;
    cout<<"value at particular index"<<" "<<a.at(2)<<endl;
    cout<<"Is Empty...???"<<" "<<a.empty()<<endl;
}