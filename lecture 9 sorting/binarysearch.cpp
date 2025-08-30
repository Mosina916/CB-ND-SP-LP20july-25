#include<iostream>
using namespace std;


int main(){

	int arr[]={2,4,5,6,7,8,10,12,13,15};
	int n=sizeof(arr)/sizeof(int);

	int key;
	cin>>key;//6
	int si=0;
	int ei=n-1;

	while(si<=ei){
	int mi=(si+ei)/2;
	if(arr[mi]==key){
		cout<<key<<" is present at index "<<mi<<endl;
		return 0;

	}
	else if(arr[mi]<key){
		si=mi+1;
	}
	else{
		ei=mi-1;
	}

}

	



	return 0;
}