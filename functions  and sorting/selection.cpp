
#include<iostream>
using namespace std;

int main(){
	int arr[100];
	int n;
	cin>>n;
	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];
	}



	// int pos=0;
	// int sitn=0;

	// for (int i = pos+1; i <=n-1; ++i)
	// {
	// 	if(arr[sitn]>arr[i]){
	// 		sitn=i;
	// 	}
	// }
	// swap(arr[pos],arr[sitn]);



	// pos=1;
	// sitn=1;

	// for (int i = pos+1; i <=n-1; ++i)
	// {
	// 	if(arr[sitn]>arr[i]){
	// 		sitn=i;
	// 	}
	// }
	// swap(arr[pos],arr[sitn]);


	// pos=2;
	// sitn=2;

	// for (int i = pos+1; i <=n-1; ++i)
	// {
	// 	if(arr[sitn]>arr[i]){
	// 		sitn=i;
	// 	}
	// }
	// swap(arr[pos],arr[sitn]);


	// pos=3;
	// sitn=3;

	// for (int i = pos+1; i <=n-1; ++i)
	// {
	// 	if(arr[sitn]>arr[i]){
	// 		sitn=i;
	// 	}
	// }
	// swap(arr[pos],arr[sitn]);


	for(int pos=0;pos<=n-2;pos++){
	int sitn=pos;

	for (int i = pos+1; i <=n-1; ++i)
	{
		if(arr[sitn]>arr[i]){
			sitn=i;
		}
	}
	swap(arr[pos],arr[sitn]);

}







	for (int i = 0; i <=n-1; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	return 0;
}