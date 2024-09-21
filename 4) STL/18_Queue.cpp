#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    cout<<"First element "<< q.front()<<endl;
    cout<<"First element "<< q.back()<<endl;

    q.pop();
    cout<<"First element "<< q.front()<<endl;
}