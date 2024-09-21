#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    cout<<s.top()<<endl;

    s.pop();

    cout<<s.top()<<endl;
    cout<<"Size of the stack "<<s.size();
}