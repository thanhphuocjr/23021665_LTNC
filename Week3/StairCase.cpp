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
// abcd
// ef
// 4 2
// abcdef
// ebcd af
int main(){
  string a, b;
  cin>>a>>b;
  cout<<a.size()<<" "<<b.size()<<endl;
  cout<<a+b<<endl;
    char doi1=a[0];
    char doi2=b[0];
    string s1=a.substr(1);
    string s2=b.substr(1);
    cout<<doi2<<s1<<" "<<doi1<<s2;
    return 0;
}
