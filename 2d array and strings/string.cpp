#include<iostream>
using namespace std;

void f(string &x){
	x=x+"abc";
	cout<<x<<endl;
}

int main(){
	// datatype name=;
	// string a="hello";
	// cout<<a<<endl;

	// string b("hello");
	// cout<<b<<endl;



	// 
	string s,s2;
	// cin>>s;
	getline(cin,s);//"hello"
	cout<<s<<endl;

	f(s);
	cout<<s<<endl;
		// getline(cin,s2);//"hecoding"

		// cout<<s1+s2<<endl;

	// cout<<s<<endl;

		// if(s1>s2){
		// 	cout<<"hi"<<endl;
		// }
		// else{
		// 	cout<<"utys"<<endl;
		// }


	// substring
	// string g=s.substr(3);
	// cout<<g<<endl;

	// cout<<s.substr(4,6)<<endl;


	// cout<<s.length()<<endl;

	// f()



	

	
	

	return 0;
}