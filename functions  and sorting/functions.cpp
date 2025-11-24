#include<iostream>
using namespace std;
// syntax


// returntype nameoffun(){
// 	// tatemtemts
// }


void abc(){

	cout<<"hello"<<endl;
	cout<<"hi"<<endl;
	cout<<"hey"<<endl;
	cout<<"bye"<<endl;

}

// with no args no rt
// void ria1(){
// 	int a,b;
// 	cin>>a>>b;
// 	int sum=a+b;
// 	cout<<sum<<endl;
// }

// with no args but yes rt

void ria1();//forward decleration
int ria2(){
	int a,b;
	cin>>a>>b;
	int sum=a+b;
	return sum;
}

// with args no rt
void ria3(int x,float y){
	
	float sum=x+y;
	cout<<sum<<endl;
}

// with  args and  rt
float ria4(float x,int y){
	
	float sum=x+y;
	return sum;
}

	

int main(){

	ria1();
	cout<<ria2()<<endl;
	ria3(6,9.8);
	cout<<ria4(2.6,5)<<endl;

// 	int a=10;
// 	int b=20;
// 	ria(6,7);
// // 	for(int i=1;i<=5;i++){
// // 	cout<<a<<endl;
// // 	cout<<b<<endl;
// // }

// ria(43);
// 	cout<<a<<endl;
// 	abc();//function
// 	cout<<b<<endl;


// 	cout<<a<<endl;
// 	cout<<b<<endl;
// 	abc();

	// cout<<"hello"<<endl;
	// cout<<"hi"<<endl;
	// cout<<"hey"<<endl;
	// cout<<"bye"<<endl;
	// abc();
	// cout<<a<<endl;
	// cout<<b<<endl;
	

	return 0;
}

void ria1(){
	int a,b;
	cin>>a>>b;
	int sum=a+b;
	cout<<sum<<endl;
}