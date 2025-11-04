#include<iostream>
using namespace std;
int main(){

	// int*ptr=new int;
	// *ptr=10;

	// cout<<*ptr<<endl;




	// int *ptr=new int[5];
	// for(int i=0;i<5;i++){
	// 	cin>>ptr[i];
	// }
	// for(int i=0;i<5;i++){
	// 	cout<<ptr[i]<<" ";
	// }
	// cout<<endl;

	// delete[] ptr;
	// ptr=NULL;


	int **ptr=new int*[4];
	for(int i=0;i<4;i++){
		ptr[i]=NULL;
	}

	for (int i = 0; i < 4; ++i)
	{
		ptr[i]=new int[6];
	}

	for (int i = 0; i <4; ++i)
	{
		for (int j = 0; j < 6; j++)
		{
			cin>>ptr[i][j];
		}
	}


		for (int i = 0; i <4; ++i)
	{
		for (int j = 0; j < 6; j++)
		{
			cout<<ptr[i][j]<<" ";
		}
		cout<<endl;
	}


	for (int i = 0; i < 4; ++i)
	{
		delete[]ptr[i];
		ptr[i]=NULL;
	}

	delete[]ptr;
	ptr=NULL;



	int *ptr=new int[10000000];
	delete[]ptr;

	ptr=new int[100000000];
	ptr=new int[1000000000];






	
	
	return 0;
}