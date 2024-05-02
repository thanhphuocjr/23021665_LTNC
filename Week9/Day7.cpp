#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

map<string, string> mp;
int main() {
    int n; cin>>n;
    while(n--){
      string s1, s2;
      cin>>s1>>s2;
      mp[s1]=s2;
    }
    string s;
    while(cin>>s){
      if(mp.count(s)==0){
        cout<<"Not found"<<endl;
      }else{
        cout<<s<<"="<<mp[s]<<endl;
      }
    }
    return 0;
}
