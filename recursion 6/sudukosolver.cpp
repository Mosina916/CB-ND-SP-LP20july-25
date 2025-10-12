#include<iostream>
using namespace std;



bool kyamaiqueenrakhsaktihun(int i,int j,int num,int mat[9][9],int n){ 
	// vertical check

	for(int k=0;k<n;k++){
		if(mat[k][j]==num){
			return false;
		}
	}


	

	// hoirzi


	for(int k=0;k<n;k++){
		if(mat[i][k]==num){
			return false;
		}
	}


	// root n * root n

	int q=sqrt(n);//3
	int si=(i/q)*q;//3
	int sj=(j/q)*q;//3


	for(int u=si;u<=si+q-1;u++){//3
	for(int v=sj;v<=sj+q-1;v++){//5
	if(mat[u][v]==num){
		return false;
	}
}
}


	



return true;

}


bool sudusolver(int mat[9][9],int i,int j,int n){//i=0 j=5;

	// base case
	if(i==n){
		// matrix print

		for(int l=0;l<n;l++){
			for(int m=0;m<n;m++){
				cout<<mat[l][m]<<" ";
			}

			cout<<endl;
		}


		return true;
	}

	if(j==n){
		return sudusolver(mat,i+1,0,n);
	}

	// rec case
	if(mat[i][j]!=0){
		return sudusolver(mat,i,j+1,n);
	}

	else{
		// i=0 j=3;

		for(int num=1;num<=n;num++){//3
		if(kyamaiqueenrakhsaktihun(i,j,num,mat,n)){
			mat[i][j]=num;//6
			bool reckaans=sudusolver(mat,i,j+1,n);
			if(reckaans==true){
				return true;

			}
			mat[i][j]=0;


		}
	}
	return false;

	}


}


int main(){
	int mat[9][9] =
	{{5,3,0,0,7,0,0,0,0},
	{6,0,0,1,9,5,0,0,0},
	{0,9,8,0,0,0,0,6,0},
	{8,0,0,0,6,0,0,0,3},
	{4,0,0,8,0,3,0,0,1},
	{7,0,0,0,2,0,0,0,6},
	{0,6,0,0,0,0,2,8,0},
	{0,0,0,4,1,9,0,0,5},
	{0,0,0,0,8,0,0,7,9}};


	sudusolver(mat,0,0,9);



	



	return 0;
}

