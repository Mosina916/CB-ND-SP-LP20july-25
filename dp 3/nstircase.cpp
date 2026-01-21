#include<iostream>
using namespace std;


int nstaircase(int n,int k){
	// base case

	if(n<0){
		return 0;

	}

	if(n==0){
		return 1;

	}


	// rec case
	// return nstaircase(n-1,k)+nstaircase(n-2,k)+nstaircase(n-3,k);

	int sum=0;
	for(int i=1;i<=k;i++){
		sum=sum+nstaircase(n-i,k);
	}

	return sum;
}


int nstaircase(int n,int k,int *arr){
	// base case

	if(n<0){
		return 0;

	}

	if(n==0){
		return arr[n]=1;

	}
	if( arr[n]!=-1){
		return arr[n];
	}

	// rec case
	// return nstaircase(n-1,k)+nstaircase(n-2,k)+nstaircase(n-3,k);

	int sum=0;
	for(int i=1;i<=k;i++){
		sum=sum+nstaircase(n-i,k,arr);
	}

	return  arr[n]=sum;
}

 int main(){

 	int n;
 	cin>>n;//5
 	int k;
 	cin>>k;//3

 	// nstaircase(n,k);

 	int *arr=new int[n+1];
 	for (int i = 0; i <=n; ++i)
 	{
 		arr[i]=-1;
 	}

 	cout<<nstaircase(n,k,arr)<<endl;

 		for (int i = 0; i <=n; ++i)
 	{
 		cout<<arr[i]<<" ";
 	}


cout<<endl;



 	
 	return 0;
 }


