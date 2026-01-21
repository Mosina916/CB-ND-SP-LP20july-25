#include<iostream>
using namespace std;
void asciisubsequ(string inp,string out,int i){
    // base case
    if(inp[i]=='\0'){
        cout<<out<<" ";
        return;
    }


    // rec  case
    asciisubsequ(inp,out,i+1);
    asciisubsequ(inp,out+inp[i],i+1);
    asciisubsequ(inp,out+to_string(int(inp[i])),i+1);

}

 int main(){

  string inp;//ab
  getline(cin,inp);//ab
  string oup="";


  asciisubsequ(inp,oup,0);



    return 0;
 }


