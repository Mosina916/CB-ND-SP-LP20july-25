#include<iostream>
using namespace std;

int main(){

	

	char arr[3][5] = {{'A','D','T','P','\0'},
					    {'P','D','W','P','\0'},
					    {'P','O','J','E','\0'}};

	for(int i=0;i<=2;i++){
		cout<<&arr[i][0]<<endl;
	};

	// cout<<arr<<endl;
	// cout<<&arr[0][0]<<endl;
	// cout<<&arr[1][0]<<endl;
	// cout<<&arr[2][0]<<endl;

				

		// for(int i=0;i<=row-1;i++){
	// 	for(int j=0;j<=col-1;j++){
	// 		cin>>arr[i][j];
	// 	}	
		
	// }



	// cout<<arr[0][0]<<" ";
	// cout<<arr[0][1]<<" ";
	// cout<<arr[0][2]<<" ";
	// cout<<arr[0][3]<<" ";

		// for(int j=0;i<=3;j++){
		// 	cout<<arr[0][j]<<" ";
		// }	
		// cout<<endl;



		// for(int j=0;i<=3;j++){
		// 	cout<<arr[1][j]<<" ";
		// }	
		// cout<<endl;


		// for(int j=0;i<=3;j++){
		// 	cout<<arr[2][j]<<" ";
		// }	
		// cout<<endl;

	// 	for(int i=0;i<=row-1;i++){
	// 	for(int j=0;j<=col-1;j++){
	// 		cout<<arr[i][j]<<" ";
	// 	}	
	// 	cout<<endl;
	// }



	
	

	return 0;
}