#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> l;
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);
    l.push_front(1);
    l.push_front(0);

    for(int x: l){
        cout<<x<<" ";
    }
    cout<<endl;

    l.pop_front();

    for(int x: l){
        cout<<x<<" ";
    }
    cout<<endl;

    l.pop_back();

    for(int x: l){
        cout<<x<<" ";
    }
    cout<<endl;

    l.erase(l.begin());

    for(int x: l){
        cout<<x<<" ";
    }
    cout<<endl;

    l.erase(prev(l.end()));

    for(int x: l){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"Size of the list "<<l.size();

    cout<<"list is empty..?? "<<l.empty();
}