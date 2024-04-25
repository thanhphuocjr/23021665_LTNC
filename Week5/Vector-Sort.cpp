#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n;
  cin>>n;
  int a[n+5];
  for(int i=1; i<=n; i++){
    cin>>a[i];
  }
  int k;
  cin>>k;
  while (k--){
    int x;
    cin>>x;
    int *pos1=lower_bound(a+1,a+n+1,x);
    int *pos2=upper_bound(a+1,a+n+1,x);
    if(*pos1==*(pos2-1) && pos1!=a+n+1){
      cout<<"Yes "<<pos1-a<<endl;
    }else{
      cout<<"No "<<pos2-a<<endl;
    }
  }
    return 0;
}
