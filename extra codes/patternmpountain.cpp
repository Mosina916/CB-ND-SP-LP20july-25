#include<iostream>
using namespace std;


int main(){

	int tr;
	cin>>tr;
	for(int rowno=1;rowno<=tr-1;rowno++){

		int sno=1;
	for(int i=1;i<=rowno;i++){
		cout<<sno<<'\t';
		sno++;
	}
	for(int i=1;i<=(2*tr-1)-(2*rowno);i++){
		cout<<' '<<'\t';
	}
	int ssno=rowno;
	for(int i=1;i<=rowno;i++){
		cout<<ssno<<'\t';
		ssno=ssno-1;
	}
	cout<<endl;
}


// last row

for (int i = 1; i <=tr; ++i)
{
	cout<<i<<'\t';

}

int z=tr-1;
for (int i = 1; i <=tr-1; ++i)
{
	cout<<z<<'\t';
	z--;
	
}


cout<<endl;





	return 0;
}