#include<iostream>
#include<stack>
using namespace std;
void generateprenthesis(int n,int openbrakets,int closebrakets,string x){
	if(closebrakets==n){
		cout<<x<<endl;
		return;
	}

	// rec case
	if(openbrakets<n){
	generateprenthesis(n,openbrakets+1,closebrakets,x+'(');
	}

	if(closebrakets<openbrakets){

	generateprenthesis(n,openbrakets,closebrakets+1,x+')');
	}

}
int main(){

	int n;
	cin>>n;//2-->(())
	string x="";

	generateprenthesis(n,0,0,x);
// 	Input: n = 3
// Output: ["((()))","(()())","(())()","()(())","()()()"]
// 	// (()())



	

	return 0;
}
