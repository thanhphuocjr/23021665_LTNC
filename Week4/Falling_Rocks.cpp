#include <iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
#include<climits>
#include<queue>
#include<map>
#include<stack>

using namespace std;
typedef long long ll;
char a[1007][1007];
int x,y;

void lan(int i , int j){
    a[i][j]='Y';
    if (i+1 <= x) {

        if ( ((j-1) >= 1) && (a[i][j-1] == 'E') && (a[i+1][j-1] == 'E')){
            lan(i+1, j-1);
        }

        if ( ((j+1) <= y) && (a[i][j+1] == 'E') && (a[i+1][j+1] == 'E')){
            lan(i+1, j+1);
        }

        if ( a[i+1][j] == 'E'){
            lan(i+1, j);
        }
    }
}

int main(){
    cin>>y>>x;

    int res1 = 0,res2 = 0;
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
    bool flag = false;
    for(int i=1; i<=y; i++){
        if(a[x][i]=='Y'){
            flag = true;
            break;
        }
    }
    if (flag){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}



