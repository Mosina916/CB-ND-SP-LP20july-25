#include<iostream>
using namespace std;
int main(){
	int no;
	cin>>no;//32145
	int sum=0;
	int place=1;
	while(no!=0){
	int ld=no%10;//4
	sum=sum+place*pow(10,ld-1);//12000   0
	no=no/10;//3214
	place=place+1;

}


cout<<sum<<endl;
	


	return 0;
}