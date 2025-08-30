#include<iostream>
using namespace std;


int main(){


	int x=80,y=0,z=-1,a=1;
	if(a++ && z++ && y++ && ++x ){
		cout<<"hello"<<endl;
	}
	else if(++a and ++z and y-- and x-- ){
		cout<<"hi"<<endl;
	}
	else if(++a and ++z and --y and a++ ) {
		cout<<"coding"<<endl;
	}
	else{
		cout<<"qwerty"<<endl;
	}
	cout<<a<<endl;
	cout<<y<<endl;
	cout<<z<<endl;
	cout<<x<<endl;




	return 0;
}