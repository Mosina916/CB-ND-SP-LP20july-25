#include<iostream>
using namespace std;
int main(){
	
	int a=10,b=20;
	

	int c=a;//10
	a=b;//20
	b=c;

	cout<<a<<" "<<b<<endl;

	return 0;
}