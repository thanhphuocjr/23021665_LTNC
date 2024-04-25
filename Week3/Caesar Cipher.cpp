#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<string>
#include<sstream>
#include<map>
#include<set>
#include <algorithm>
using namespace std;
typedef long long ll;
using namespace std;

int main(){
    int n;
    cin>>n;
    char a[n+5];
    char b[n+5];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    int k; cin>>k;
    for(int i=1; i<=n; i++){
        if(isalpha(a[i])){
          char base;
            if( isupper(a[i])) base='A';
            else base='a';
            b[i]=(a[i]-base+k)%26+base;
        }else{
          b[i]=a[i];
        }
    }
    for(int i=1; i<=n; i++){
        cout<<b[i];
    }
 return 0;
}
