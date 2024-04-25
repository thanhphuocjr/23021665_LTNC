#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

set<int> se;
vector<string> vt;
int main() {
  int n;
    cin>>n;
    while(n--){
        int a, b;
        cin>>a>>b;
        if(a==1){
            se.insert(b);
        }else if(a==2){
            se.erase(b);
        }else{
            auto it=se.find(b);
            if(it!=se.end()){
                vt.push_back("Yes");
            }else{
                vt.push_back("No");
            }
        }
    }
    for(auto x: vt){
        cout<<x<<endl;
    }
    return 0;
}
