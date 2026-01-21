#include<iostream>
using namespace std;
void codeofstring(string inp,string out,int i){
    // base case
  if(i==inp.length()){
    cout<<out<<" ";
    return;
  }
    // rec  case
  if(i<inp.length()){//3<4
  char ch=inp[i]-'0'+96;//'e'
  codeofstring(inp,out+ch,i+1);//aabe
}
if(i+1<inp.length()){
  int x=(inp[i]-'0')*10+inp[i+1]-'0';//25
  if(x<=26){
    char ch=x+96;
    codeofstring(inp,out+ch,i+2);

  }
}
}

 int main(){

  string inp;//1125
  getline(cin,inp);//1125
  string oup="";


 codeofstring(inp,oup,0);



    return 0;
 }


