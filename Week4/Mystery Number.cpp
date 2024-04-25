3,#include <bits/stdc++.h>
using namespace std;

bool isPalidrome(string s){
    bool check=true;
    int n=(int)s.size();
    for(int i=0; i<n/2; i++){
        if(s[i]!=s[n-1-i] ){
            check=false;
            break;
    }
    }
    if(check) return true;
    return false;


}
string del(string s, int i){
    s.erase(s.begin()+i);
    return s;
}
vector<int>vt;
int main()
{
    
    int n;
    cin>>n;
    while(n--){
    string s;
    cin>>s;

    if(isPalidrome(s)){
        vt.push_back(-1);
    }else
    {
        for(int i=0; i<s.size(); i++){
    if(isPalidrome(del(s,i))){
        vt.push_back(i);
        break;
    }
        }
    }
}
for(int x: vt){
    cout<<x<<endl;
}
return 0;
}
