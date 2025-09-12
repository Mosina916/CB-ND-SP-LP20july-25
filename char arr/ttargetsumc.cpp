#include<iostream>
using namespace std;


int main(){


	int n;
	cin>>n;
	int arr[10000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int target;
	cin>>target;

	sort(arr,arr+n);//1 2 3 4 5

	int i=0;
	int j=n-1;

	while(i<j){
	if(arr[i]+arr[j]==target){
		cout<<arr[i]<<" and "<<arr[j]<<endl;
		i++;
		j--;

	}
	else if(arr[i]+arr[j]>target){
		j--;
	}
	else{
		i++;

	}
}

	return 0;
}