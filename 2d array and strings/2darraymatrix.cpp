#include<iostream>
using namespace std;

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
	cin>>key;//27

	// 4 6 3 17 
	// 9 7 3 5
	// 2 7 1 0

	for(int i=0;i<=row-1;i++){//3
	for(int j=0;j<=col-1;j++){ //4
	if(arr[i][j]==key){
		cout<<"key is present at index "<<i<<" "<<j<<endl;
		return 0;

	}
}
}


cout<<"key is not present"<<endl;



	
	

	return 0;
}