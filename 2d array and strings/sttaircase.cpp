#include<iostream>
using namespace std;

int staircase(int arr[100][100],int row,int col,int key){

	int l=0;
	int k=col-1;
	while(l<=row-1 and k>=0){
		if(arr[l][k]==key){
			cout<<"key is present at index "<<l<< " "<<k<<endl;
			return 7;
			// break;
		}
		else if(arr[l][k]<key){
			l++;
			
		}
		else{
			k--;
			
		}
	
	}
	return 515;


}

int main(){

	int arr[100][100];

	int row;
	cin>>row;//3   

	int col;
	cin>>col;//4

	for (int i = 0; i <=row-1; ++i)
	{
		for(int j=0;j<=col-1;j++){
			cin>>arr[i][j];
		}
	}
	int key;

	cin>>key;

	int y=staircase(arr,row,col,key);
	if(y==515){
		cout<<"key is not present"<<endl;
	}



	
	

	return 0;
}