#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int a[100][100];
int dx[7]={0,0,0,1,2,2,2};
int dy[7]={0,1,2,1,0,1,2};
int main(){
    int n=6;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    int temp=INT_MIN;
    for(int i=0; i<n-2;i++){
        for(int j=0; j<n-2; j++){
            int sum=0;
            for(int k=0; k<7; k++){
                sum+=a[i+dx[k]][j+dy[k]];
            }
            temp=max(temp,sum);
        }
    }
    cout<<temp;
}
