#include<iostream>
using namespace std;

int noofways(int mp,int k){//5  3


	if(mp<0){
		return 0;
	}

	if(mp==0){
		return 1;
	}


	int sum=0;
	for(int i=1;i<=k;i++){
	sum=sum+noofways(mp-i,k);
	}
	return sum;

	// return noofways(mp-1)+noofways(mp-2)+noofways(mp-3);





}
int main(){
	int  mp,k;
	cin>>mp>>k;
	cout<<noofways(mp,k)<<endl;

	



	return 0;
}

