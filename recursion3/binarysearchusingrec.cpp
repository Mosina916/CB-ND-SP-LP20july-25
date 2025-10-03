
#include<iostream>
using namespace std;
// void bubbleosort(int *arr,int n,int j){
// 	if(j==n){
// 		return;
// 	}

// 	for (int i = 0; i <=n-j-1;i++)
// 	{
// 		if(arr[i]>arr[i+1]){
// 			swap(arr[i],arr[i+1]);
			
// 		}
// 	}
	
// }
void bubbleosortrec(int *arr,int n,int j,int i){//5 0
		if(j==n){
			return;
		}

		if(i==n-j){
			bubbleosortrec(arr,n,j+1,0);
		}
		else{
	
		if(arr[i]>arr[i+1]){
			swap(arr[i],arr[i+1]);
			
		}
		bubbleosortrec(arr,n,j,i+1);
	}
	
}

int main(){
	int arr[]={5,4,3,2,1};
	int n=5;
	// bubbleosort(arr,n,1);
	bubbleosortrec(arr,n,1,0);

	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;
	return 0;
}