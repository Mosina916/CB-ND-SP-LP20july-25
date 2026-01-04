#include<iostream>
using namespace std;
int wine(int winebtl[],int l,int r,int year){
	if(l>r){
		return 0;
	}

	int op1=year*winebtl[l]+wine(winebtl,l+1,r,year+1);
	int op2=year*winebtl[r]+wine(winebtl,l,r-1,year+1);
	return max(op1,op2);
}


int winetd(int winebtl[],int l,int r,int year,int arr[100][100]){
	if(l>r){
		return arr[l][r]=0;
	}
	if(arr[l][r]!=-1){
		return arr[l][r];
	}

	int op1=year*winebtl[l]+winetd(winebtl,l+1,r,year+1,arr);
	int op2=year*winebtl[r]+winetd(winebtl,l,r-1,year+1,arr);
	return arr[l][r]=max(op1,op2);
}


int bu(int winebtl[],int n){
	int arr[100][100]={0};


	// diagonal fill

	for (int i = 0; i <n; ++i)
	{
		arr[i][i]=n*winebtl[i];
	}

	for(int cr=n-2;cr>=0;cr--){//2
	for(int cc=0;cc<n;cc++){//4
	if(cc>cr){
		int year=n-(cc-cr);//4
		int op1=year*winebtl[cr]+arr[cr+1][cc];//24
		int op2=year*winebtl[cc]+arr[cr][cc-1];
		arr[cr][cc]=max(op1,op2);



	}
}
}

for (int i = 0; i <n; ++i)
 	{
 		for (int j = 0; j <n; j++)
 		{
 			cout<<arr[i][j]<<" ";
 		}

 		cout<<endl;
 	}


return arr[0][n-1];


}






 int main(){

 	int winebtl[]={2,3,5,1,4};
 	int n=sizeof(winebtl)/sizeof(int);

 	// cout<<wine(winebtl,0,n-1,1)<<endl;

 	// int arr[100][100];

 	// for (int i = 0; i <100; ++i)
 	// {
 	// 	for (int j = 0; j <100; j++)
 	// 	{
 	// 		arr[i][j]=-1;
 	// 	}
 	// }




 	// cout<<winetd(winebtl,0,n-1,1,arr)<<endl;

 	// for (int i = 0; i <n; ++i)
 	// {
 	// 	for (int j = 0; j <n; j++)
 	// 	{
 	// 		cout<<arr[i][j]<<" ";
 	// 	}

 	// 	cout<<endl;
 	// }

 	cout<<bu(winebtl,n)<<endl;




 	

 	return 0;
 }


