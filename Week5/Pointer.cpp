#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> vt;
    for(int i=0; i<n; i++){
      int x;
      cin>>x;
      vt.push_back(x);
    }
    int k; cin>>k;
    vt.erase(vt.begin()+k-1);
    int start, end;
    cin>>start>>end;
    vt.erase(vt.begin()+start-1,vt.begin()+end-1);
    cout<<vt.size()<<endl;
    for(int x: vt){
      cout<<x<<" ";
    }
    return 0;
}
