#include<iostream>
using namespace std;


int main(){


	int arr[]={4,3,5,3,5,3,34,6,6,5,5,4,3,2,1};

	// selection sort
	int n=sizeof(arr)/sizeof(int);


	for(int pos=0;pos<=n-2;pos++){
		int minind=pos;
		for(int j=pos+1;j<=n-1;j++){
			if(arr[minind]>arr[j]){
				minind=j;
			}
		}
		swap(arr[pos],arr[minind]);
	}


	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;




	return 0;
}