
#include<iostream>
using namespace std;
void abc(int b[],int n){

	for (int i = 0; i <=n-1; ++i)
	{
		b[i]=b[i]+10;
	}

	// print

	for (int i = 0; i <=n-1; ++i)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;//14,15,13,16,12


}
int main(){

	int arr[]={4,5,3,6,2};
	int n=sizeof(arr)/sizeof(int);

	for (int i = 0; i <=n-1; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;//4,5,3,6,2
	abc(arr,n);

	for (int i = 0; i <=n-1; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;//14,15,13,16,12











	// int arr[5]={4,5,3,6,2};
	// int arr[]={4,5,3,6,2};
	// int n=sizeof(arr)/sizeof(int);
	// for(int i=0;i<=n-1;i++){
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;
	// int arr[1000000];
	// intn;
	// cin>>n;
	// int p=20;
	// abc(arr);

	// int n;
	// cin>>n;
	// int arr[n];










	return 0;
}



