#include<iostream>
using namespace std;
int main(){
	
	// int arr[5]={5,4,3,2,1};

	// int n=5;

	int arr[100];
	int n;
	cin>>n;//7
	for (int i = 0; i <n;i++)
	{
		cin>>arr[i];
	}

	// 1 2  3 4  5 6

	for(int j=1;j<=n-1;j++){
	bool kyaswaphuva=false;

	// cout<<j<<endl;

	for(int i=0;i<=n-j-1;i++){
		if(arr[i]>arr[i+1]){
			swap(arr[i],arr[i+1]);
			kyaswaphuva=true;
			
		}
	}
	if(kyaswaphuva==false){
		break;
	}
}
	
	// 1 2 3 4 5


	for (int i = 0; i <=n-1; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;
	


	return 0;
}