// #include<iostream>
// using namespace std;
// void abc(int n){
// 	n=n+30;//40
// 	cout<<"inside abc "<<n<<endl;//40
// }
// int main(){


// 	int n=10;
// 	int &x=n;
// 	x=x+90;

// 	cout<<n<<endl;
// 	cout<<x<<endl;


// 	// int n;
// 	// cin>>n;//10
// 	// cout<<"inside main before abc fn call "<<n<<endl;//10
// 	// abc(n);

// 	// cout<<"inside main after abc fn call "<<n<<endl;//10 40

	
// 	return 0;
// }



#include<iostream>
using namespace std;
void abc(int &x){///int x=n
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



