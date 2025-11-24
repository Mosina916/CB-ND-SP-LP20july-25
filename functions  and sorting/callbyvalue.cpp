#include<iostream>
using namespace std;
void abc(int x){
	x=x+30;//40
	cout<<"inside abc "<<x<<endl;//40
}
int main(){

	int n;
	cin>>n;//10
	cout<<"inside main before abc fn call "<<n<<endl;//10
	abc(n);

	cout<<"inside main after abc fn call "<<n<<endl;//10 40

	
	return 0;
}

