// 	1 
//   1 2 1
// 1 2 3 2 1



#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;


	for(int rowno=1;rowno<=tr;rowno=rowno+1){
		// spaces

		for (int i = 1; i <=tr-rowno ;i=i+1)
		{
			cout<<" "<<'\t';
		}


		// stars
	
		int stno=rowno;
		for (int j = 1; j <=rowno ;j=j+1)
		{
			cout<<stno<<'\t';
			stno=stno+1;
			
		}

		// hash
		int hno=2*rowno-2;//int hno=stno-2;
		for(int k=1;k<=rowno-1;k++){
			cout<<hno<<'\t';
			hno=hno-1;
		}

		cout<<endl;



	}


	return 0;
}
