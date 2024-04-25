#include <bits/stdc++.h>

using namespace std;
int main(){
  string target="hackerrank";
  int n;
  cin>>n;
  while(n--){
    string s;
    cin>>s;
    int index=0;
    for(int i=0; i<(int)s.size();i++){
      if(s[i]==target[index]){
        index++;
      }
    }
    if(index>=(int)target.size()) cout<<"YES"; else cout<<"NO";
    cout<<endl;
  }
  return 0;
}
