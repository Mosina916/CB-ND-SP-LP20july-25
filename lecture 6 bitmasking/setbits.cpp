#include<iostream>
using namespace std;
int main(){
	int no;
	cin>>no;


	int count=0;
	while(no!=0){
		if((no&1)==1){
			count++;
	}

	no=no>>1;
}

	cout<<count<<endl;


	return 0;
}