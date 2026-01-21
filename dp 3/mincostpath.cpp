#include<iostream>
using namespace std;
int mincostpath(int matr[4][5],int x,int y){
	// base case
	if(x<0||y<0){
		return INT_MAX;
	}

		if(x==0 and y==0){
		return matr[x][y];
	}


	// rec case

	int op1=mincostpath(matr,x-1,y);
	int op2=mincostpath(matr,x,y-1);
	return min(op1,op2)+matr[x][y];


}


int mincostpathtd(int matr[4][5],int x,int y,int arr[100][100]){
	// base case
	if(x<0||y<0){
		return INT_MAX;
	}

		if(x==0 and y==0){
		return arr[x][y]=matr[x][y];
	}
	if(arr[x][y]!=-1){
		return arr[x][y];
	}

	// rec case

	int op1=mincostpathtd(matr,x-1,y,arr);
	int op2=mincostpathtd(matr,x,y-1,arr);
	return arr[x][y]=min(op1,op2)+matr[x][y];


}

int bu(int matr[4][5],int x,int y){
	int arr[100][100];
	
	for(int i=0;i<=x;i++){
	for(int j=0;j<=y;j++){
	if(i==0 and j==0){
		arr[i][j]=matr[i][j];

	}
	else if(i==0){
		arr[i][j]=arr[i][j-1]+matr[i][j];
	}
	else if(j==0){
		arr[i][j]=arr[i-1][j]+matr[i][j];
	}
	else{
		arr[i][j]=min(arr[i-1][j],arr[i][j-1])+matr[i][j];
	}
}
}


 		for (int i = 0; i <=x; ++i)
 		{
 			for (int j = 0;  j<=y; j++)
 			{
 				cout<<arr[i][j]<<" ";
 			}
 			cout<<endl;
 		}


return arr[x][y];


}
 int main(){

 	int matr[4][5]={
 		{3,2,5,1,4},
 		{2,4,1,3,9},
 		{5,6,1,3,4},
 		{1,4,9,3,2}

 	};


 	// int arr[100][100];


 	// for (int i = 0; i <100; ++i)
 	// {
 	// 	for (int j = 0; j <100 ; j++)
 	// 	{
 	// 		arr[i][j]=-1;
 	// 	}
 	// }


 	// 	cout<<mincostpathtd(matr,3,4,arr)<<endl;


 		// for (int i = 0; i <=3; ++i)
 		// {
 		// 	for (int j = 0;  j<=4; j++)
 		// 	{
 		// 		cout<<arr[i][j]<<" ";
 		// 	}
 		// 	cout<<endl;
 		// }


 	
 	// cout<<mincostpath(matr,3,4)<<endl;

 		 	cout<<bu(matr,3,4)<<endl;

 	return 0;
 }


