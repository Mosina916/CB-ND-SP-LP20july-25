#include<iostream>
using namespace std;

void spiralprint(char arr[100][100],int row,int col){

	int sc=0;
	int ec=col-1;
	int sr=0;
	int er=row-1;
	char ch='O';
	while(sc<=ec and sr<=er){
		// fr
		for(int i=sc;i<=ec;i++){
			arr[sr][i]=ch;
		}
		sr++;
		// dw
		for(int j=sr;j<=er;j++){
			arr[j][ec]=ch;
		}
		ec--;
		// bw
		for(int k=ec;k>=sc;k--){
			arr[er][k]=ch;
		}
		er--;
		// up
		for(int l=er;l>=sr;l--){
			arr[l][sc]=ch;
		}
		sc++;
		if(ch=='O'){
			ch='X';
		}
		else{
			ch='O';
		}

	}

}

int main(){

	char arr[100][100];

	int row;
	cin>>row;//6 

	int col;
	cin>>col;//6

	

	spiralprint(arr,row,col);


	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}



	
	

	return 0;
}