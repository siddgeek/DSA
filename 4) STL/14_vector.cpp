#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;

    cout<<"Size-> "<<v.capacity()<<endl;

    v.push_back(12);
    cout<<"Size-> "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Size-> "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Size-> "<<v.capacity()<<endl;
    v.push_back(122);
    cout<<"Size-> "<<v.capacity()<<endl;
    v.push_back(22);
    cout<<"Size-> "<<v.capacity()<<endl;
    cout<<"Size-> "<<v.size()<<endl; //capacity tells the space & size tells the no of elements present in the vector.

    for(int x: v){
        cout<<x<<" ";
    }
    cout<<endl;

    sort(v.begin(), v.end());

    for(int x: v){
        cout<<x<<" ";
    }
    cout<<endl;

    // v.pop_front();

    for(int x: v){
        cout<<x<<" ";
    }
    cout<<endl;

    v.pop_back();

    for(int x: v){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"Before clear size :-"<<v.size()<<endl;
    v.clear();
    cout<<"After clear size :-"<<v.size();

    cout<<"Size-> "<<v.capacity()<<endl;
}