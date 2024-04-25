#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  int res;
  cin>>s;
  int dai=s.size();
  string time=s.substr(dai-2);
  string ans="";
  for(int i=0; i<(int)s.size(); i++){
    if(s[i]==':'){
      res=i;
      break;
    }else{
      ans+=s[i];
    }
  }
  string phutgiay=s.substr(res,dai-res-2);
  int a=stoi(ans);
  if(time=="PM"){
    if(a<12){
      a+=12;
    }
    cout<<a<<phutgiay;
  }
  else
  {
    if(a>=12){
    a-=12;
    
  }
  string phuoc=to_string(a);
  if(phuoc.size()<2){
    phuoc="0"+phuoc;
  }
  cout<<phuoc<<phutgiay;
    
  }
  
  
 return 0;
}
