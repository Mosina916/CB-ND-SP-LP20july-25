#include<iostream>
using namespace std;
int main(){
	

	int arr[100];
	int n;
	cin>>n;//
	for(int i=0;i<=n-1;i++){
		cin>>arr[i];
	}

	int key;
	cin>>key;//44
	int i;
	for(i=0;i<=n-1;i++){
	if(arr[i]==key){
		cout<<"key is present at index "<<i<<endl;
		// break;

	}
}

// if(i==n){
// 	cout<<"key is not present"<<endl;
// }

	

	cout<<endl;

	



	return 0;
}