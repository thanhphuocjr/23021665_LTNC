#include <bits/stdc++.h>

using namespace std;
int main(){
  string s;
  int dem=0;
  cin>>s;
  
  for(int i=0; i<(int)s.size(); i++){
    if(s[i]>='A'&& s[i]<='Z'){
      dem++;
    }
  }
  cout<<dem+1;

    return 0;
}
