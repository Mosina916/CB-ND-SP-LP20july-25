#include<iostream>
using namespace std;

int main(){

	// char arry banante hai
	// char arr[5]={'a','d','q','R','\0'};

	char arr[100];
	// cin>>arr;
	// cin.getline(arryname,arrysize);//char array ka input lene k l;ye so that wo space ignore na klarei
	cin.getline(arr,100);
	// cin.getline(arr,100,delimiter);

	// cin.getline(arr,100,'?');
	cout<<arr<<endl;

	// int arr[100];
	// int n;
	// // cin>>n;
	// for (int i = 0; i <5; ++i)
	// {
	// 	cin>>arr[i];
	// }

	

	return 0;
}