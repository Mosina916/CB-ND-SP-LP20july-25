#include<iostream>
using namespace std;


int main(){

	int n;
	cin>>n;//378
	int x=n;
	int sum=0;

	while(x>0){
	int ld=x%10;
	sum=sum+ld;//8
	x=x/10;
}

// 18
	int sum2=0;

	// n-->58/2-->189
	for(int i=2;i<=n;i++){
	while(n%i==0){
		int p=i;
		while(p!=0){
			sum2=sum2+p%10;//18
			p=p/10;

		}
		
		n=n/i;//29

	}

	if(n==1){
		break;
	}
}

if(sum==sum2){
	cout<<1<<endl;
}
else{
	cout<<0<<endl;
}


	
	

	return 0;

}


