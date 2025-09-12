#include<iostream>
using namespace std;

void update(int b[],int n){

	for(int i=0;i<n;i++){
		b[i]=b[i]+10;
	}
	for (int i = 0; i <n; ++i)
	{
		cout<<b[i]<<" ";//11 12 13 14 15
	}
	cout<<endl;

}
int main(){
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(int);
	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";//1 2 3 4 5
	}
	cout<<endl;

	update(arr,n);

	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";//1 2 3 4 5 11 12 13 14 15
	}

	cout<<endl;

	

	return 0;

}


