#include<iostream>
using namespace std;
// void abc(int b[],int n){

void abc(int *b,int n){//int*b=arr;
	
	for (int i = 0; i <n; ++i)
	{
		b[i]=b[i]+10;
	}


	for (int i = 0; i <n; ++i)
	{
		cout<<b[i]<<" ";
	}//13,14,12,15

	cout<<endl;

}


// abcd(float*ptr)
int main(){
	// =ox

	float f=45.5;
	float*ptr=&f;//-->ox...200

	cout<<sizeof(ptr)<<endl;

	// abcd(&f);
	// int arr[]={3,4,2,5};

	// arr[1]-->b[1]


	// int n=sizeof(arr)/sizeof(int);
	// for (int i = 0; i <n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }

	// cout<<endl;//3,4,2,5

	// int n=10;
	// int*ptr=0x...300;

	// abc(arr,n);


	// for (int i = 0; i <n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }

	// cout<<endl;//13,14,12,15



	return 0;
}