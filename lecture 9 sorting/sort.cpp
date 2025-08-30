#include<iostream>
using namespace std;


int main(){


	int arr[]={5,6,4,2,2,4,4,3,4,8};

	int n=sizeof(arr)/sizeof(int);

	sort(arr,arr+n);

	for (int i = 0; i <=n-1; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	



	return 0;
}