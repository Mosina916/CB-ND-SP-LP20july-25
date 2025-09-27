#include<iostream>
#include<climits>
using namespace std;
string moveallxatend(string s){//abxs
	// base case
	if(s==""){
		return "";
	}
	// rec case
	char ch=s[0];//'x'

	if(ch=='x'){
	return moveallxatend(s.substr(1))+ch;//absxx

	}
	else{
	

	return ch+moveallxatend(s.substr(1));
}

}

int main(){

	string s;
	getline(cin,s);//xabxsx-->absxxx
	cout<<moveallxatend(s)<<endl;
	return 0;
}