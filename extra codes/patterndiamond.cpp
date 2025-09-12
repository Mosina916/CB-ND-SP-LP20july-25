#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;
	// ist part 1 to 4


	for(int rowno=1;rowno<=(tr+1)/2;rowno=rowno+1){
		// space

		for (int i = 1; i <=(tr+1)/2-rowno;i=i+1)
		{
			cout<<' ';
		}


		// star
		for (int j = 1; j <=2*rowno-1;j=j+1)
		{
			cout<<'*';
		}

		cout<<endl;




	}




	// 2nd part   5 7 naam 1 to 3

	for(int rowno=1;rowno<=(tr-1)/2;rowno=rowno+1){

		// space

		for (int k = 1; k<=rowno ; k=k+1)
		{
			cout<<' ';
		}


		// stars
		for (int l = 1; l<=tr-2*rowno ; l=l+1)
		{
			cout<<'*';
		}
		cout<<endl;


	}










	return 0;
}