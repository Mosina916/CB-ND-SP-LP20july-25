#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;
	int stno=1;

	for(int rowno=1;rowno<=tr;rowno=rowno+1){
		// spaces

		for (int i = 1; i <=tr-rowno ;i=i+1)
		{
			cout<<" "<<'\t';
		}


		// stars
		

		for (int j = 1; j <=2*rowno-1 ;j=j+1)
		{
			cout<<stno<<'\t';
			stno=stno+1;
		}

		cout<<endl;



	}


	return 0;
}