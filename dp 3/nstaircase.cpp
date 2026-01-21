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


int nstaircase(int n,int k,int *dp){
	// base case

	if(n<0){
		return 0;

	}

	if(n==0){
		return dp[n]=1;

	}
	if( dp[n]!=-1){
		return dp[n];
	}

	// rec case
	// return nstaircase(n-1,k)+nstaircase(n-2,k)+nstaircase(n-3,k);

	int sum=0;
	for(int i=1;i<=k;i++){
		sum=sum+nstaircase(n-i,k,dp);
	}

	return  dp[n]=sum;
}

int bu(int n,int k){
	int *dp=new int[n+1];
	dp[0]=1;


	for(int i=1;i<=n;i++){
	int sum=0;
	for(int l=1;l<=k;l++){

		if(i-l>=0){
			sum=sum+dp[i-l];

		}
	}
	dp[i]=sum;
}

	for (int i = 0; i <=n; ++i)
 	{
 		cout<<dp[i]<<" ";
 	}

return dp[n];


	
}

 int main(){

 	int n;
 	cin>>n;//5
 	int k;
 	cin>>k;//3

 	// nstaircase(n,k);

 	int *dp =new int[n+1];
 	for (int i = 0; i <=n; ++i)
 	{
 		dp[i]=-1;
 	}

 		cout<<bu(n,k)<<endl;

 	// cout<<nstaircase(n,k,arr)<<endl;

 	// 	for (int i = 0; i <=n; ++i)
 	// {
 	// 	cout<<arr[i]<<" ";
 	// }


// cout<<endl;



 	
 	return 0;
 }


