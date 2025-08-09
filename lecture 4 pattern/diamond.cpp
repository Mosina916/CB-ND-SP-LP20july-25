#include <iostream>
using namespace std;
// diamond
int main(){
	int tr;
	cin>>tr;

	if(tr==1){
		cout<<'*';
		return 0;
	}

	// row 1
	for(int i=1;i<=tr;i++){
		cout<<"*"<<'\t';

	}

	cout<<endl;


	// part 2
	for(int rowno=1;rowno<=(tr-1)/2;rowno++){
	// star
	for(int j=1;j<=((tr+1)/2)-rowno;j++){
		cout<<'*'<<'\t';
	}
	// sp
	for(int k=1;k<=2*rowno-1;k++){
		cout<<' '<<'\t';
	}

	// star
	for(int l=1;l<=((tr+1)/2)-rowno;l++){
		cout<<'*'<<'\t';
	}
	cout<<endl;
	}


	// Part3
	for(int rowno=1;rowno<=(tr-3)/2;rowno++){

	// st
	for(int o=1;o<=rowno+1;o++){
		cout<<'*'<<'\t';
	}

	// sp

	for(int p=1;p<=tr-2-(2*rowno);p++){
		cout<<' '<<'\t';
	}


	// st
	for(int q=1;q<=rowno+1;q++){
		cout<<'*'<<'\t';
	}

	cout<<endl;
	}



	// part 4


	for(int i=1;i<=tr;i++){
		cout<<"*"<<'\t';

	}


	cout<<endl;








	return 0;
}