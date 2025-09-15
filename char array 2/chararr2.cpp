#include<iostream>
using namespace std;


int main(){

	// char arr[6]={'A','R','Q','U','I','\0'};

	// int n=sizeof(arr)/sizeof(char);

	// // char arr[6]="ARQUI";
	// // char arr[]="ARQUI";


	// cout<<arr<<endl;

	// for(int i=0;i<n-1;i++){
	// 	cout<<arr[i];
	// }


	// int arr2[]={2,3,4,5,6};
	// cout<<arr2<<endl;


	char arr[100];
	// cin>>arr;

	cin.getline(arr,100);


	cout<<arr<<endl;

	
	return 0;
}