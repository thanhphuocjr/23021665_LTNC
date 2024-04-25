#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include<map>
using namespace std;
vector<int> vt;
map<string,int>mp;
int main() {
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        if(a==1){
            string s; int b;
            cin>>s>>b;
            mp[s]+=b;
        }else if(a==2){
            string s; cin>>s;
            mp.erase(s);
        }else{
            string s;
            cin>>s;
            if(mp.count(s)!=0){
                vt.push_back(mp[s]);
            }else{
                vt.push_back(0);
            }
        }
    }
    for(int x: vt){
        cout<<x<<endl;
    }
    return 0;
}
