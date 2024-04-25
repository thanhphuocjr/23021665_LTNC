#include <bits/stdc++.h>

using namespace std;
int main(){
int n;
cin>>n;
int am=0;
int duong=0;
int so0= 0;
int a[n];
for(int i=0; i<n; i++){
  cin>>a[i];
  if(a[i]==0)so0++;
  if(a[i]>0)duong++;
  if(a[i]<0)am ++;
}
cout<<fixed<<setprecision(6)<<(double)duong/n<<endl;
cout<<fixed<<setprecision(6)<<(double)am/n<<endl;
cout<<fixed<<setprecision(6)<<(double)so0/n<<endl;
    return 0;
}
