#include<iostream>
using namespace std;

int fact(int a){//5

	int ans=1;
	for(int i=a;i>=1;i--){
		ans=ans*i;//20*3==60*2-->120*1-->120
	}

	return ans;

}
int ncr(int n,int r){
	return fact(n)/(fact(r)*fact(n-r));
}
int main(){
	int n,r;
	cin>>n>>r;//5

	cout<<ncr(n,r)<<endl;


	return 0;

}


