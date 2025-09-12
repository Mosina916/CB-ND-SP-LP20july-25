#include<iostream>
using namespace std;

int main(){
	int arr[]={3,5,2,7,6};
	int n=sizeof(arr)/sizeof(int);


	// cout<<arr<<endl;
	// cout<<&arr[0]<<endl;
	cout<<arr[0]<<endl;//3
	cout<<*arr<<endl;



	// cout<<arr+1<<endl;
	// cout<<&arr[1]<<endl;
	cout<<*(arr+1)<<endl;
	cout<<arr[1]<<endl;


	// cout<<arr+2<<endl;
	// cout<<&arr[2]<<endl;
	cout<<arr[2]<<endl;


	
	


	return 0;
}