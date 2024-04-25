4,#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n,k;
    cin>>n>>k;
     vector<vector<int>> vt(n);
      int index=0;
     while (n--){
        int x;
        cin>>x;

     for(int i=0; i<x; i++){
            int a; cin>>a;
            vt[index].push_back(a);
        }
        index++;
     }
     while(k--){
        int a, b;
        cin>>a>>b;
        cout<<vt[a][b]<<endl;
     }
    return 0;
}
