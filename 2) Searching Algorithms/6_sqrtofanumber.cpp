#include<bits/stdc++.h>
using namespace std;
long long int Binarysearch(int n){
     long long int s=0, e=n, mid=s+(e-s)/2;
     long long int ans=-1;
     while(s<=e){
         long long int sqr = mid*mid;
         if(sqr == n){
             return mid;
         }
         if(sqr < n){         
             ans = mid;
             s = mid + 1;
         }else
             e = mid - 1;
         mid=s+(e-s)/2;     
     }
     return ans;
}
double andartak(int n, int precision, long long int Baharka)
{
     double factor=1, ans=Baharka;
     for(int i=0; i<precision; i++){
        factor = factor/10;
        for(double j=ans; j*j<n; j=j+factor){
            ans=j;
        }
     }
     return ans;
}

int main(){
    int n;
    cin>> n;
    long long int Baharka = Binarysearch(n);
    cout<<andartak(n, 3, Baharka)<<endl;
    return 0;
}