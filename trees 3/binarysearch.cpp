
#include<iostream>
using namespace std;


int main(){

	int arr[100];
	int n;
	cin>>n;//11
	for (int i = 0; i <=n-1; ++i)
	{
		cin>>arr[i];
	}//3 5 2 12 -4 7

	int key;
	cin>>key;//22



	int s=0;
	int e=n-1;

	while(s<=e){
	int mid=(s+e)/2;//0
	if(arr[mid]==key){

		cout<<"key is present at index "<<mid<<endl;
		break;

	}
	else if(arr[mid]<key){
		s=mid+1;

	}
	else{
		e=mid-1;

	}

}

if(s>e){
	cout<<"not present"<<endl;
}



	return 0;
}