#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



int main()
{
int n; cin>>n;
int a[n];
for(int i=0; i<n; i++){
  cin>>a[i];
}
reverse(a,a+n);
for(int x: a){
  cout<<x<<" ";
}
}
