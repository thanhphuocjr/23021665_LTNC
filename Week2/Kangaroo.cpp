#include<iostream>
using namespace std;

int main(){
  double x1, v1,x2,v2;
  cin>>x1>>v1>>x2>>v2;
  double time=(x2-x1)/(v1-v2);
if(time<0){
  cout<<"NO";
}else if(double(time)==int(time)){
  cout<<"YES";
}else{
  cout<<"NO";
}
  return 0;
}
