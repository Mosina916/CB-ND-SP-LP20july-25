#include<iostream>
#include<climits>
using namespace std;
int sumdigitd(int n){//0
	// base case
	if(n==0){
		return 0;
	}


	// rec case
	return sumdigitd(n/10)+n%10;
}
int main(){

	int n;
	cin>>n;//0
	
	cout<<sumdigitd(n)<<endl;

	return 0;
}