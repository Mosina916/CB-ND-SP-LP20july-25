#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;
	// ist part 1

	cout<<'*';
	for(int i=1;i<=(tr-3)/2;i++){
		cout<<' ';
	}
	for(int j=1;j<=(tr+1)/2;j++){
		cout<<"*";
	}

	cout<<endl;






	// part 2
	for(int rowno=1;rowno<=(tr-3)/2;rowno++){

	cout<<'*';
	for(int k=1;k<=(tr-3)/2;k++){
		cout<<' ';
	}
	cout<<'*';
	cout<<endl;

}



// part 3

for(int m=1;m<=tr;m++){
	cout<<"*";
}

cout<<endl;



	// part 4
for(int rowno=1;rowno<=(tr-3)/2;rowno++){

for(int l=1;l<=(tr-1)/2;l++){
	cout<<' ';
}
cout<<'*';

for(int n=1;n<=(tr-3)/2;n++){
	cout<<' ';
}
cout<<'*';

cout<<endl;
}







	// part 5


for(int p=1;p<=(tr+1)/2;p++){
	cout<<'*';
}

for(int q=1;q<=(tr-3)/2;q++){
	cout<<' ';
}
cout<<'*';

cout<<endl;









	return 0;
}