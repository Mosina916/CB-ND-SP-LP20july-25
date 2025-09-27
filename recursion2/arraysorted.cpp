
#include<iostream>
using namespace std;
// method 1
bool isarraysorted(int arr[],int n){
	if(n==1){
		return true;
	}
	if(arr[0]<=arr[1] and isarraysorted(arr+1,n-1)){
		return true;
	}
	return false;

}
// method 2
bool isarraysorted2(int arr[],int n){
	if(n==1){
		return true;
	}
	if(arr[n-2]<=arr[n-1] and isarraysorted2(arr,n-1)){
		return true;
	}
	return false;

}

bool isarraysorted3(int arr[],int n,int i){
	if(i==n-1){
		return true;
	}
	if(arr[i]<=arr[i+1] and isarraysorted3(arr,n,i+1)){
		return true;
	}
	return false;

}



int main(){
	int arr[]={3,5,4,6,7};
	int n=sizeof(arr)/sizeof(int);
	if(isarraysorted(arr,n)==true){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	if(isarraysorted2(arr,n)==true){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	if(isarraysorted3(arr,n,0)==true){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	
	return 0;
}