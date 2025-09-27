#include<iostream>
#include<climits>
using namespace std;
int power(int a,int b){
	// base case
	if(b==0){
		return 1;
	}
	// if(b==1){
	// 	return a;
	// }


	// rec caseb

	return a*power(a,b-1);
}

int main(){

	int a,b;
	cin>>a>>b;//3 5
	cout<<power(a,b)<<endl;
	return 0;
}