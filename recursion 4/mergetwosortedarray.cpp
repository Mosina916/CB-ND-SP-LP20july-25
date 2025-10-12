
#include<iostream>
using namespace std;
void mergetowsortedarray(int arr[],int s,int e){
	int i=s;
	int mid=(s+e)/2;
	int j=mid+1;
	int temp[10000];
	int k=s;
	while(i<=mid and j<=e){
	if(arr[i]<arr[j]){//7<6
		temp[k]=arr[i];//2
		k++;
		i++;
	}
	else{
		temp[k]=arr[j];//2
		k++;
		j++;

	}
}
while(i<=mid){
	temp[k]=arr[i];
	i++;
	k++;
}
while(j<=e){
	temp[k]=arr[j];
	j++;
	k++;
}
// copy
for (int i = s; i <=e; ++i)
{
	arr[i]=temp[i];
}


}


void mergesort(int *arr,int s,int e){
	if(s==e){//1
		return;
	}

	int mid=(s+e)/2;///2
	mergesort(arr,s,mid);//4 1 3--> 1 3 4    3
	mergesort(arr,mid+1,e);//5 2 --> 2 5    4
	mergetowsortedarray(arr,s,e);//1 2 3 4 5   5


}
// 0 1 2 3 4  4 5 6 6 7 9 11
int main(){
	// int arr1[5]={2,4,7,9,11};//i-->2
	// int arr2[7]={0,1,3,4,5,6,6 };// j-->7

	// int n=5;
	// int m=7;


	int arr[]={4,1,3,5,2};
	int n=5;
	// mergetowsortedarray(arr1,arr2,n,m);
	mergesort(arr,0,n-1);

	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}


	// temp[]={0,1,2,3,4,4,5,6,6,7,9,11};


	return 0;
}