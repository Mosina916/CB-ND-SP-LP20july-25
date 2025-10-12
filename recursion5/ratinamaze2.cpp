#include <iostream>
using namespace std;

bool ratinamaze(char arr[4][5],int r,int c,int i,int j,int sol[4][5]){
	if(i==r-1 and j==c-2){
		sol[i][j]=1;
		for(int l=0;l<r;l++){
			for(int m=0;m<=c-2;m++){
				cout<<sol[l][m]<<" ";
			}
			cout<<endl;
		}

		// return true;

        sol[i][j]=0;
		return false;


	}

	sol[i][j]=1;

	if(j<=c-3 and arr[i][j+1]!='O'){
		bool reckaans=ratinamaze(arr,r,c,i,j+1,sol);//true false
		if(reckaans==true){
			return true;
		}
	}

	if(i<=r-2 and arr[i+1][j]!='O'){
		bool reckaans=ratinamaze(arr,r,c,i+1,j,sol);//true false
		if(reckaans==true){
			return true;
		}
	}

	sol[i][j]=0;
	return false;
	

}
int main(){

	char arr[4][5]={
		"XXOX",
		"XXOX",
		"XXXO",
		"OOXX"
	};
	int sol[4][5]={0};


	ratinamaze(arr,4,5,0,0,sol);



	return 0;
}