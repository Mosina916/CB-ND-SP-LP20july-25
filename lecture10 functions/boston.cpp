#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//22

	int sum=0;
	int x=n;
	while(x!=0){
		sum=sum+x%10;
		x=x/10;
	}


	// 27
	int sum2=0;

	for(int i=2;i<=n;i++){
		while(n%i==0){//9 %3 //3
			int p=i;//3
			while(p!=0){
		sum2=sum2+p%10;//9
		p=p/10;
	}
	n=n/i;//3/3
	if(n==1){
		break;
	}

		}
		if(n==1){
			break;
		}
	}	


// cout<<sum<<endl;
// cout<<sum2<<endl;

if(sum==sum2){
	cout<<1<<endl;
}
else{
	cout<<0<<endl;
}



	return 0;
}