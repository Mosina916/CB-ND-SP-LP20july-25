#include<iostream>
using namespace std;
int sol[100][100]={0};


bool kyamaiqueenrakhsaktihun(int n,int i,int j){
	// vertical check
	for(int k=0;k<=i-1;k++){
		if(sol[k][j]==1){
			return false;
		}
	}


	// right dia

	int s=i-1;
	int t=j+1;
		while(s>=0 and t<n){
	if(sol[s][t]==1){
		return false;
	}
	s--;//-1
	t++;//0
}




	// left dia

	int u=i-1;
	int v=j-1;

	while(u>=0 and v>=0){
	if(sol[u][v]==1){
		return false;
	}
	v--;//-1
	u--;//0
}



return true;

}
bool nqueen(int n,int i){
	// base case

	if(i==n){
		// sol matrix print

		for(int l=0;l<n;l++){
			for(int m=0;m<n;m++){
				cout<<sol[l][m]<<" ";
			}
			cout<<endl;

		}

		// return true;


		return false;
	}


	// rec case
	for(int j=0;j<n;j++){
	if(kyamaiqueenrakhsaktihun(n,i,j)){
		sol[i][j]=1;
		bool reckaans=nqueen(n,i+1);//false
		if(reckaans==true){
			return true;
		}
		sol[i][j]=0;



	}
}

return false;



}
int main(){
	int n;
	cin>>n;//4
	nqueen(n,0);



	return 0;
}

