#include <iostream>
using namespace std;
// diamond
int main(){
	char ch;
	cin>>ch;//'B'


	// if(ch>='A' and ch<='Z'){//implicit type casting 

	// 	cout<<"UPPERCASE"<<endl;
	// }
	// else if(ch>='a' and ch<='z'){
	// 	cout<<"lowercase"<<endl;

	// }
	// else{
	// 	cout<<"some other character"<<endl;

	// }



	// float(5)/9



	// if(ch>=65 and ch<=90){//implicit type casting 

	// 	cout<<"UPPERCASE"<<endl;
	// }
	// else if(ch>=97 and ch<=122){
	// 	cout<<"lowercase"<<endl;

	// }
	// else{
	// 	cout<<"some other character"<<endl;

	// }



	if(isupper(ch)){//implicit type casting 

		cout<<"UPPERCASE"<<endl;
	}
	else if(islower(ch)){
		cout<<"lowercase"<<endl;

	}
	else{
		cout<<"some other character"<<endl;

	}









	return 0;
}