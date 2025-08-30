#include<iostream>
using namespace std;
int main(){
	

	int arr[100];
	int n;
	cin>>n;//8


	for(int i=0;i<=n-1;i++){
		cin>>arr[i];//-40 6 2 -8 -1 13 3 9
	}

	// int largest=arr[0];//-40

	int largest=INT_MIN;

	for(int i=0;i<n;i++){
		if(arr[i]>largest){
			largest=arr[i];
		}
	}


	cout<<largest<<endl;



	

// if(i==n){
// 	cout<<"key is not present"<<endl;
// }

	

	cout<<endl;

	



	return 0;
}