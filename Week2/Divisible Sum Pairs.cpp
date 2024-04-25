#include <bits/stdc++.h>

using namespace std;
int dem1(int n){
  int dem=0;
  int s=n;
  while(n){
    int a=n%10;
    if(a==0){
      n=n/10;
      continue;
    }else{
      if(s%a==0) dem++;
      n/=10;
    }
    
  }
  return dem;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int a; cin>>a;
    cout<<dem1(a)<<endl;
  }
}
