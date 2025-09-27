#include<iostream>
#include<climits>
using namespace std;
int fact(int n){//5
	// base case
	if(n==0){
		return 1;
	}


	// rec case
	return n*fact(n-1);
}
int main(){

	int n;
	cin>>n;//0
	if(n<0){
		return 0;
	}

	cout<<fact(n)<<endl;

	return 0;
}