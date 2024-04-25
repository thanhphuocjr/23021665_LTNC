#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    vector<string> vt;
    cin>>n;
    while(n--){
      int sum=0;
        int m;
        cin>>m;
        bool check=false;
        int a[m];
        for(int i=0; i<m; i++){
            cin>>a[i];
            sum+=a[i];
        }
        int sumright=sum;
        int sumleft=0;
        for(int i=0; i<m; i++){
          if(i==0){
            sumleft=0;
            sumright-=a[i];
          }else{
            sumleft+=a[i-1];
            sumright-=a[i];
          }
          if(sumright==sumleft){
            check=true;
            break;
          }
        }
        if(check){
            vt.push_back("YES");
        }else{
            vt.push_back("NO");
        }
}
    for(string x : vt){
        cout<<x<<endl;
    }
    return 0;
}
