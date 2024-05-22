#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int max=1;
    for(int i=1; i<n; i++){
        if(a[i-1]==a[i]){
            int dem=1;
            while(a[i]==a[i-1]){
                dem++;
                i++;
            }
            if(dem>max){
                max=dem;
            }
        }
    }
    cout<<n-max;
    cout<<endl;
}
