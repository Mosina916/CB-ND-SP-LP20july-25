#include<iostream>
using namespace std;

int l=90;
int main(){

	int i=0;
	int l=30;

	

	::l=::l+100;

	for(int i=1;i<=5;i++){

		cout<<i<<endl;
		cout<<::l<<endl;

	}

	for(int i=1;i<=5;i++){
			::l=::l+99;
		cout<<i<<endl;
		cout<<::l<<endl;

	}



	cout<<::l<<endl;
	cout<<i<<endl;

	return 0;
}