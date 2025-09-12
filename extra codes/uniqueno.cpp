#include<iostream>
using namespace std;
int main(){
	int tn;
	cin>>tn;//7

	int no;
	cin>>no;//3
	int ans=no;//3

	for(int i=1;i<=tn-1;i=i+1){
	cin>>no;

	ans=ans^no;//7
}

cout<<ans<<endl;



	return 0;
}