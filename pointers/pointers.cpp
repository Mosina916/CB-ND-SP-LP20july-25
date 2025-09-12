#include<iostream>
using namespace std;
int main(){

	int a=10;
	float b=50.43;
	double c=45.345243;
	// bool
	cout<<a<<endl;//10

	cout<<&a<<endl;
	int*x=&a;
	cout<<x<<endl;


	int**d=&x;
	cout<<d<<endl;

	int***r=&d;
	cout<<r<<endl;


	cout<<***r<<endl;



	return 0;
}