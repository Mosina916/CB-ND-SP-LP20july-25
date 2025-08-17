#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//1 to 6

	// 2 3  4 1 6
	int sum=0;

	int no;

	for(int i=1;i<=n-1;i=i+1){
	cin>>no;//6
	sum=sum^no;//16
}

// sum-->16

int tsum=0;
for(int j=1;j<=n;j++){
	tsum=tsum^j;
}//21


cout<<(tsum^sum)<<endl;




	return 0;
}