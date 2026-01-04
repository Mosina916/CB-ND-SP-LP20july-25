#include<iostream>
using namespace std;
// int minstepsto1(int n){
// 	// base case
// 	if(n==1){
// 		return 0;
// 	}

// 	// rec case
// 	int x=INT_MAX,y=INT_MAX,z=INT_MAX;
// 	x=minstepsto1(n-1);//9 to 1 -->2

// 	if(n%2==0){
// 		y=minstepsto1(n/2);//5 top 1 -->3
// 	}
// 	if(n%3==0){
// 		z=minstepsto1(n/3);//
// 	}


// 	return min(x,min(y,z))+1;
// }


int minstepsto1td(int n,int *arr){
	// base case
	if(n==1){
		return arr[n]=0;
	}

	if(arr[n]!=-1){
		return arr[n];

	}

	// rec case
	int x=INT_MAX,y=INT_MAX,z=INT_MAX;
	x=minstepsto1td(n-1,arr);//9 to 1 -->2

	if(n%2==0){
		y=minstepsto1td(n/2,arr);//5 top 1 -->3
	}
	if(n%3==0){
		z=minstepsto1td(n/3,arr);//
	}


	return arr[n]=min(x,min(y,z))+1;
}
int bu(int n){
	int *arr=new int[n+1];
	arr[1]=0;
		for(int i=2;i<=n;i++){
		int x=INT_MAX,y=INT_MAX,z=INT_MAX;
		x=arr[i-1];//0
		if(i%2==0){
			y=arr[i/2];//0
		}
		if(i%3==0){
			z=arr[i/3];//int max
		}

		arr[i]=min(x,min(y,z))+1;
	}

return arr[n];




}
int main(){
	int n;
	cin>>n;//10
	// cout<<minstepsto1(n)<<endl;

	int *arr=new int[n+1];

	for (int i = 0; i <=n; ++i)
	{
		arr[i]=-1;
	}

	cout<<minstepsto1td(n,arr)<<endl;


	// for (int i = 0; i <=n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }

	// cout<<endl;


	cout<<bu(n)<<endl;







	




	

	return 0;
}