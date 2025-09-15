#include<iostream>
using namespace std;

void spiralprint(int arr[100][100],int row,int col){

	int sc=0;
	int ec=col-1;
	int sr=0;
	int er=row-1;
	while(sc<=ec and sr<=er){
		// fr
		for(int i=sc;i<=ec;i++){
			cout<<arr[sr][i]<<" ";
		}
		sr++;
		// dw
		for(int j=sr;j<=er;j++){
			cout<<arr[j][ec]<<" ";
		}
		ec--;
		// bw
		for(int k=ec;k>=sc;k--){
			cout<<arr[er][k]<<" ";
		}
		er--;
		// up
		for(int l=er;l>=sr;l--){
			cout<<arr[l][sc]<<" ";
		}
		sc++;

	}

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


	spiralprint(arr,row,col);



	
	

	return 0;
}