#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;


	for(int rowno=1;rowno<=tr;rowno=rowno+1){
		// spaces

		for (int i = 1; i <=tr-rowno ;i=i+1)
		{
			cout<<" ";
		}


		// stars


		for (int j = 1; j <=2*rowno-1 ;j=j+1)
		{
			cout<<"*";
		}

		cout<<endl;



	}


	return 0;
}