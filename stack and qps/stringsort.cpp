#include<iostream>
#include<stack>
using namespace std;
// s1-->batman s2-->bat  true
// s1-->bat s2-->batman false

// s1-->apple s2-->mango true
// s1-->mango s2-->apple false

// mycomperator(string s1,string s2){ //s1-->batman s2-->bat
// mycomperator(string s1,string s2){ //s1-->bat s2-->batman

bool mycomperator(string s1,string s2){ //s1--bat s2-->ap

	int l1=s1.length();
	int l2=s2.length();
	if(l1<l2 and s2.substr(0,l1)==s1){
		return false;
	}
	else if(s1>s2 and s1.substr(0,l2)!=s2){
		return false;
	}
	return true;

}

int main(){

	int n;
	cin>>n;
	cin.ignore();
	string s[100];
	for (int i = 0; i < n; ++i)
	{
		getline(cin,s[i]);
	}

	// bat
	// apple
	// batman
	sort(s,s+n,mycomperator);

	for (int i = 0; i <n; ++i)
	{
		cout<<s[i]<<endl;
	}



	return 0;
}
