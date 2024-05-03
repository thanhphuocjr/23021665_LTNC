#include<bits/stdc++.h>
using namespace std;
int main(){
  int n; cin>>n;
  int a[n];
  for(int i=0; i<n; i++){
    cin>>a[i];
  }
  int cnt=0;
  for(int i=0; i<n; i++){
    for(int j=i; j<n; j++){
      if(a[i]>a[j]){
        swap(a[i],a[j]);
        cnt++;
      }
    }
  }
 cout<<"Array is sorted in "<<cnt<<" swaps."<<endl;
cout<<"First Element: "<<a[0]<<endl;
cout<<"Last Element: "<<a[n-1];
}
