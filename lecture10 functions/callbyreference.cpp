#include<iostream>
using namespace std;

void chan(int &a){//5 int &a=n

	a=a+10;
	cout<<a<<endl;

}

int main(){
	int n;
	cin>>n;
	cout<<n<<endl;
	chan(n);
	cout<<n<<endl;

	

	return 0;

}


