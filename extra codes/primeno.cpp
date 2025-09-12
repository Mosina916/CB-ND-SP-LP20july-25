#include<iostream>
using namespace std;
int main(){
	int N;
	cin>>N;

	for(int no=2;no<=N;no++){
	// ==================================
	int i=2;
	while(i<=no-1){// 3<=8
		if(no%i==0){//9/3
			// cout<<"no is not prime"<<endl;
			break;
		}
		else{
			i=i+1;//3
		}

	}	

	if(i==no){
	cout<<no<<endl;
}

// ==================================
}





	return 0;
}