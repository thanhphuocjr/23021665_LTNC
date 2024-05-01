#include<iostream>
using namespace std;
int a[10008];
bool check(int a[],int n, int x){
    bool check1=false;
    int left=0; int right=n-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(a[mid]<x){
            left=mid+1;
        }else if (a[mid]>x){
            right=mid;
        }else{
            check1=true;
            break;
        }
    }
    return check1;
}


int main(){
    int n; int x;
    cin>>n>>x;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    if(check(a, n, x)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
