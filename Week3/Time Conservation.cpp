#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<string>
#include<sstream>
#include<map>
#include<set>
#include<map>
#include<bits/stdc++.h>
using namespace std;
bool check1(int arr[],int dai,int n){
  for(int i=0; i<dai ; i++){
    if(n%arr[i]!=0) return false;
  }
  return true;
}
bool check2(int arr[],int dai,int n){
  for(int i=0; i<dai ; i++){
    if(arr[i]%n!=0) return false;
  }
  return true;
}
int main(){
  int n,m;
  cin>>n>>m;
  int a[n], b[m];
  for(int i=0; i<n; i++){
    cin>>a[i];
  }
  sort(a, a+n);
  for(int i=0; i<m; i++){
    cin>>b[i];x
  }
  sort(b, b+n);
  int dem=0;
  for(int i=a[0];i<=b[m-1]; i++){
    if(check1(a,n,i)&& check2(b,m,i)) dem++;
  }
  cout<<dem;
}
