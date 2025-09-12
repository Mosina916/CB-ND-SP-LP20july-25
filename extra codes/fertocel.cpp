#include<iostream>
using namespace std;
int main(){
	int initv,finv,stv;
	cin>>initv>>finv>>stv;
	int f=initv;//0

	while(f<=finv){
	int c=5.0/9*(f-32);
	cout<<f<<'\t'<<c<<endl;
	f=f+stv;
}





	return 0;
}