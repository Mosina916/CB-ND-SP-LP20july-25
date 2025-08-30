#include<iostream>
using namespace std;
int main(){
	
	int arr[5]={5,4,3,2,1};

	// 5 
	for(int i=0;i<=3;i++){
		if(arr[i]>arr[i+1]){
			swap(arr[i],arr[i+1]);
		}
	}
	// op/. 4 3 2 1 5
	for(int i=0;i<=2;i++){
		if(arr[i]>arr[i+1]){
			swap(arr[i],arr[i+1]);
		}
	}

	// op/.  3 2 1 4 5

	for(int i=0;i<=1;i++){
		if(arr[i]>arr[i+1]){
			swap(arr[i],arr[i+1]);
		}
	}

	// op/.  2 1 3 4 5

	for(int i=0;i<=0;i++){
		if(arr[i]>arr[i+1]){
			swap(arr[i],arr[i+1]);
		}
	}

	// 1 2 3 4 5


	for (int i = 0; i <=4; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;
	


	return 0;
}