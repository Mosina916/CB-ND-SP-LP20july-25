#include<iostream>
using namespace std;

float sum4(int p,float q,int c);

int main(){
	int l,n;
	float m;
	cin>>l>>n>>m;

	cout<<sum4(l,m,n);

	
	return 0;
}

float sum4(int p,float q,int c){
	// cout<<p+q+c<<endl;
	return p+q+c;
}
