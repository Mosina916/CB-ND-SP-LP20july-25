#include<iostream>
using namespace std;
// int mincoinsneeded(int coins[],int tc,int amt){
// 	// base case
// 	if(amt==0){
// 		return 0;
// 	}


// 	// rec case
// 	int ans=INT_MAX;	
// 	for(int i=0;i<tc;i++){
// 	int bachahuvamt=amt-coins[i];//7-10
// 	if(bachahuvamt>=0){
// 		int rans=mincoinsneeded(coins,tc,bachahuvamt);//2
// 		if(rans<ans){//2<2
// 			ans=rans+1;//2
// 		}



// 	}
// }

// return ans;

// }


int mincoinsneededtd(int coins[],int tc,int amt,int *arr){
	// base case
	if(amt==0){
		return arr[amt]=0;
	}

	if(arr[amt]!=INT_MAX){
		return arr[amt];
	}
	// rec case
	int ans=INT_MAX;	
	for(int i=0;i<tc;i++){
	int bachahuvamt=amt-coins[i];//7-10
	if(bachahuvamt>=0){
		int rans=mincoinsneededtd(coins,tc,bachahuvamt,arr);//2
		if(rans<ans){//2<2
			ans=rans+1;//2
		}



	}
}

return arr[amt]=ans;

}


int bu(int coins[],int tc,int amt){
	int *arr=new int[amt+1];
	arr[0]=0;
	for(int curramt=1;curramt<=amt;curramt++){

	int ans=INT_MAX;
	for(int i=0;i<tc;i++){
	int bamt=curramt-coins[i];//1-1
	if(bamt>=0){
		ans=min(ans,arr[bamt]+1);//1

	}
}

	arr[curramt]=ans;
}


return arr[amt];


}

 int main(){

 	int coins[]={9,6,5,1};
 	int tc=sizeof(coins)/sizeof(int);
 	int amt;
 	cin>>amt;

 		cout<<bu(coins,tc,amt)<<endl;

 	// cout<<mincoinsneeded(coins,tc,amt)<<endl;

 	// int *arr=new int[amt+1];


 	// for (int i = 0; i <=amt; ++i)
 	// {
 	// 	arr[i]=INT_MAX;
 	// }


 	// cout<<mincoinsneededtd(coins,tc,amt,arr)<<endl;


 	//  	for (int i = 0; i <=amt; ++i)
 	// {
 	// 	cout<<arr[i]<<" ";
 	// }


 	

 	return 0;
 }


