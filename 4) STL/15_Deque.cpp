#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(4);
    d.push_back(40);
    d.push_front(12);       // isme ham aage piche dono mein se daal aur nikal sakte hain.

    for(int x: d){
        cout<<x<<" ";
    }
    cout<<endl;
    
    d.pop_back();

    for(int x: d){
        cout<<x<<" ";
    }
    cout<<endl;

    d.pop_front();

    for(int x: d){
        cout<<x<<" ";
    }
    cout<<endl;

    d.push_back(5);
    d.push_back(0);
    d.push_back(10);
    d.push_back(9);
    d.push_front(2);

    for(int x: d){
        cout<<x<<" ";
    }

    cout<<endl;

    d.erase(d.begin(), d.begin()+1); // isme jo second iterator hai wo erase ke time pe include nahi hota hai keval specific range ko point karne ke liye use hota hai
    // And also (first iterator <= last iterator)

    for(int x: d){
        cout<<x<<" ";
    }

    cout<<endl;

    d.erase(d.end()-2, d.end());
    //d.end() last element ke baad ka addresss return karta hai.

    for(int x: d){
        cout<<x<<" ";
    }
}