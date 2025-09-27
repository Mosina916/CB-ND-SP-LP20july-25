#include<iostream>
#include<climits>
using namespace std;
int mult(int a,int b){
	// base case
	if(b==0){
		return 0;
	}
	// if(b==1){
	// 	return a;
	// }


	// rec caseb

	return a+mult(a,b-1);
}

int main(){

	int a,b;
	cin>>a>>b;//3 5
	cout<<mult(a,b)<<endl;
	return 0;
}