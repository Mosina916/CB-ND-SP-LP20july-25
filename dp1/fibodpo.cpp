#include<iostream>
using namespace std;



int fibo(int pos){//1
	
	if(pos==1||pos==2){
		return pos-1;
	}



	// recursive case

	return fibo(pos-1)+fibo(pos-2);//1+0
	
}


int fibodp(int pos,int *arr){//1
	
	if(pos==1||pos==2){
		return arr[pos]=pos-1;
	}

	if(arr[pos]!=-1){
		return arr[pos];
	}

	// recursive case

	return arr[pos]=fibodp(pos-1,arr)+fibodp(pos-2,arr);//1+0
	
}


int fibobu(int pos){
	int *arr=new int[pos+1];
	arr[1]=0;
	arr[2]=1;

	for(int i=3;i<=pos;i++){
	arr[i]=arr[i-1]+arr[i-2];
	}

	for (int i = 0; i <=pos; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return arr[pos];
}


int main(){

	// int arr[100]={-1}
	int pos;
	cin>>pos;//4
	cout<<"fibo no is : "<<fibo(pos)<<endl;


	// int arr[pos+1];



	int *arr=new int[pos+1];
	for (int i = 0; i <=pos; ++i)
	{
		arr[i]=-1;
	}

	cout<<fibodp(pos,arr)<<endl;


	for (int i = 0; i <=pos; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	cout<<fibobu(pos)<<endl;






	

	return 0;
}