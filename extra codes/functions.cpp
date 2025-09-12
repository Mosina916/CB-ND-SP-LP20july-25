#include<iostream>
using namespace std;

// returntype name(){
// 	// statemets

// }

void statements(){
	cout<<"hello"<<endl;
	cout<<"hii"<<endl;
	cout<<"bye"<<endl;

}


void sum(){
	int x,y;
	cin>>x>>y;

	cout<<x+y<<endl;
}


int sum2(){
	int x,y;
	cin>>x>>y;

	return x+y;
}

void sum3(int p,int q){

	cout<<p+q<<endl;

}

float sum4(int p,float q,int c){
	// cout<<p+q+c<<endl;
	return p+q+c;
}
int main(){

// 	for(int i=1;i<=3;i++){

// 	cout<<"hello"<<endl;
// 	cout<<"hii"<<endl;
// 	cout<<"bye"<<endl;
// }

	int l,n;
	float m;
	cin>>l>>n>>m;

	cout<<sum4(l,m,n);

	sum3(5,9);

	int a=5;
	int b=10;

	cout<<a<<endl;

	// functionname();
	statements();//function call/invoke

	// cout<<"hello"<<endl;
	// cout<<"hii"<<endl;
	// cout<<"bye"<<endl;
	cout<<b<<endl;


	cout<<a<<endl;
	cout<<b<<endl;
	statements();//function call/invo
	// cout<<"hello"<<endl;
	// cout<<"hii"<<endl;
	// cout<<"bye"<<endl;


	// cout<<"hello"<<endl;
	// cout<<"hii"<<endl;
	// cout<<"bye"<<endl;
	statements();//function call/invo
	cout<<a<<endl;
	cout<<b<<endl;
	



	// return 0;
}
