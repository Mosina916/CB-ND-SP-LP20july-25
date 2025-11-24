#include<iostream>
using namespace std;
int main(){

	


	char n='D';
	char*ptr=&n;//ox..7b8

	char**aptr=&ptr;//ox..300

	char***bptr=&aptr;//0x...500



	// *ptr--->n
	cout<<n<<endl;
	cout<<*ptr<<endl;


	// **aptr-->n

	cout<<n<<endl;
	cout<<**aptr<<endl;


	// ***bptr-->n

	cout<<n<<endl;
	cout<<***bptr<<endl;




	


	return 0;
}