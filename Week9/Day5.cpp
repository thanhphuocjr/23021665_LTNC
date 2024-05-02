#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void handleString(string s){
  int n=s.size();
  string res="";
  for(int i=0; i<n; i+=2){
    res+=s[i];
  }
  res+=" ";
  for(int i=1; i<n; i+=2){
    res+=s[i];
  }
  cout<<res;
}

int main() {
   int t; cin>>t;
   while(t--){
     string s; cin>>s;
     handleString(s);
     cout<<endl;
   }
    return 0;
}
