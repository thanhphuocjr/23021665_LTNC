#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
typedef long long ll;
char a[1000][1000];
int x,y;
void lan(int i , int j){
    a[i][j]='Y';
    int itrai=i+1;
    int jtrai=j-1;
    int iphai=i+1;
    int jphai=j+1;
    if(a[i][j-1]=='E' && a[itrai][jtrai]=='E' && itrai>=1 && itrai<=y && jtrai<=x){
        lan(itrai,jtrai);
    }
    if(a[i][j+1]=='E' && a[iphai][jphai]=='E' && iphai>=1 && iphai<=y && jphai<=x){
        lan(iphai,jphai);
    }
    if(a[i+1][j]=='E' && i+1<=x){
        lan(i+1,j);
    }
}

int main(){
    cin>>x>>y;
    int res1,res2;
    for(int i=1; i<=x; i++){
        for(int j=1; j<=y; j++){
            cin>>a[i][j];
            if(a[i][j]=='Y'){
                res1=i;
                res2=j;
            }
        }
    }
    lan(res1,res2);
    for(int i=1; i<=y; i++){
        if(a[x][i]=='Y'){
            cout<<"YES";
            break;
        }
    }
    cout<<endl;
    for(int i=1; i<=x; i++){
        for(int j=1; j<=y; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
