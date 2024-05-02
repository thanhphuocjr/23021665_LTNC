#include<bits/stdc++.h>
using namespace std;
vector<int> vt;
void phantich(int n){
  while(n){
    int a=n%2;
    vt.push_back(a);
    n/=2;
  }
}
int main(){
  int n; cin>>n;
  int max1=0;
  phantich(n);
int i=0;
while(i<vt.size()){
  if(vt[i]==1){
    int dem=1;
    while(vt[i+1]==1){
      dem++;
      i++;
    }
    max1=max(dem,max1);
  }
  i++;
}
cout<<max1;
}
