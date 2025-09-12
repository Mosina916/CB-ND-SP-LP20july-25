#include<iostream>
using namespace std;
int main(){
	int no,upttohmdec;
	cin>>no>>upttohmdec;//13 3

	double step=1;
	double i=0;

	for(int times=1;times<=upttohmdec+1;times=times+1){

		while(i*i<=no){
		i=i+step;//4
	}


	i=i-step;//3
	step=step/10;//1/10   0.1


	}

	cout<<i<<endl;
	



	return 0;
}