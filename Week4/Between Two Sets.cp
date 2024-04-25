,#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    int a;
    cin>>n;
    int k;
    cin>>k;
    int c;
    if(n%2==0){
        c=n/2;
    }else{
        c=(n-1)/2;
    }
    if(k%2==0){
        a=k/2;
    }else{
        a=(k-1)/2;
    }
    int b=min(c-a,a);
    cout<<b;
    return 0;
}
