#include<iostream>
using namespace std;


int main(){


	int arr[]={4,3,5,3,5,3,34,6,6,5,5,4,3,2,1};

	// insertion sort
	int n=sizeof(arr)/sizeof(int);


	for(int k=1;k<=n-1;k++){
		int temp=arr[k];
		int j;
		for(j=k-1;j>=0;j--){
			if(temp<arr[j]){
				arr[j+1]=arr[j];
			}
			else{
				break;
			}
		}
		arr[j+1]=temp;
	}


	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;




	return 0;
}