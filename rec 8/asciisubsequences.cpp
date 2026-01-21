#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
int c=0;
void allasciisubsequences(string in,string out,int i){
	// if(in[i]=='\0'){
	// 	out[i]='\0';
	// 	cout<<out<<endl;
	// 	return;
	// }
	 if (i == in.length())
    {
    	c++;     
            // Print the subsequence
           cout << out <<" ";
        return;
    }


	// don't include character

	allasciisubsequences(in,out,i+1);
	// include chacater
	allasciisubsequences(in,out+to_string(int(in[i])),i+1);
	allasciisubsequences(in,out+in[i],i+1);

	


}

int main(){
	string in,out="";
	cin>>in;
	allasciisubsequences(in,out,0);


	cout<<endl<<c<<endl;

	return 0;
}