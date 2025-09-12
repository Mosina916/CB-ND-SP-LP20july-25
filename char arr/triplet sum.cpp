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

	sort(arr,arr+n);//1 2 3 4 5 6 7 8  9

	for(int i=0;i<=n-3;i++){
	int j=i+1;
	int k=n-1;

	while(j<k){
	if(arr[i]+arr[j]+arr[k]==target){
		cout<<arr[i]<<", "<<arr[j]<<" and "<<arr[k]<<endl;
		j++;
		k--;

	}
	else if(arr[i]+arr[j]+arr[k]>target){// 11 >10
		k--;

	}
	else{
		j++;

	}
}
}


	
	return 0;
}