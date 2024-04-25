#include <cmath>
#include <cstdio>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<string>
#include<sstream>
#include<map>
#include<set>
#include<map>
using namespace std;
//5
//1 1 2 3 4
//2 3 4 7 1 1
map<int,int> mp;
set<int> se1;
set<int>se2;
using namespace std;
int main() {
  int n;
  cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        se1.insert(a[i]);
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
        se2.insert(b[i]);
    }
    for(int x: se2){
        mp[x]=1;
    }
    for(int x: se1){
        mp[x]++;
    }
    for(int x: se2){
        if(mp[x]==1){
            cout<<x<<" ";
        }
    }
    return 0;
}
