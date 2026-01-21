#include<iostream>
using namespace std;


// int lcs(string s1,string s2,int i,int j){
// 	if(s1[i]=='\0' || s2[j]=='\0'){
// 		return 0;
// 	}


// 	if(s1[i]==s2[j]){
// 		return 1+lcs(s1,s2,i+1,j+1);
// 	}
// 	else{
// 		int op1=lcs(s1,s2,i+1,j);
// 		int op2=lcs(s1,s2,i,j+1);
// 		return max(op1,op2);
// 	}

// }



int lcs(string s1,string s2){
	if(s1.length()==0 || s2.length()==0){
		return 0;
	}


	if(s1[0]==s2[0]){
		return 1+lcs(s1.substr(1),s2.substr(1));
	}
	else{
		int op1=lcs(s1.substr(1),s2);
		int op2=lcs(s1,s2.substr(1));
		return max(op1,op2);
	}

}



 int main(){

 	string s1;
 	getline(cin,s1);

 	string s2;
 	getline(cin,s2);
 	cout<<lcs(s1,s2)<<endl;

 	// cout<<lcs(s1,s2,0,0)<<endl;
 }


