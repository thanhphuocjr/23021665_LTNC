#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<string>
#include<sstream>
#include<map>
#include<set>

using namespace std;
typedef long long ll;

int main() {
    int n,k;
    cin>>n>>k;
    int a[n+5]={0};
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a[x%k]++;
    }
    long long sum=0;
    if(k%2==0)
    {
        int sogiua=k/2;
        sum+=(a[0]*(a[0]-1)/2+(a[sogiua])*(a[sogiua]-1)/2);
        for(int i=1;i<sogiua; i++){
            sum+=(a[i]*a[k-i]);
        }
    }
    else
    {
        sum+=a[0]*(a[0]-1)/2;
        for(int i=1; i<=k/2;i++){
            sum+=(a[i]*a[k-i]);
        }
    }
    cout<<sum;
    return 0;
}
