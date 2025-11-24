#include<iostream>
using namespace std;
int main(){

	// bool n=true;
	// bool*ptr=&n;//ox..7b8

	// cout<<&n<<endl;//0x...300


	char n='D';
	char*ptr=&n;//ox..7b8

	// cout<<(int*)&n<<endl;//0x...300
	// cout<<(float*)&n<<endl;//0x...300
	// cout<<(double*)&n<<endl;//0x...300
	// cout<<(bool*)&n<<endl;//0x...300

	cout<<(void*)&n<<endl;//0x...300

	// int**aptr=&ptr;//ox..300

	// int***bptr=&aptr;//0x...500

	// // cout<<bptr<<endl;
	// // cout<<&aptr<<endl;


	// // *ptr--->n
	// cout<<n<<endl;
	// cout<<*ptr<<endl;


	// // **aptr-->n

	// cout<<n<<endl;
	// cout<<**aptr<<endl;


	// // ***bptr-->n

	// cout<<n<<endl;
	// cout<<***bptr<<endl;



	// float n=10.5;
	// float*ptr=&n;//ox..7b8

	// float**aptr=&ptr;//ox..300

	// float***bptr=&aptr;//0x...500

	// // cout<<bptr<<endl;
	// // cout<<&aptr<<endl;


	// // *ptr--->n
	// cout<<n<<endl;
	// cout<<*ptr<<endl;


	// // **aptr-->n

	// cout<<n<<endl;
	// cout<<**aptr<<endl;


	// // ***bptr-->n

	// cout<<n<<endl;
	// cout<<***bptr<<endl;


	// 	double n=10.5;
	// double*ptr=&n;//ox..7b8

	// double**aptr=&ptr;//ox..300

	// double***bptr=&aptr;//0x...500

	// cout<<bptr<<endl;
	// cout<<&aptr<<endl;


	// bool n=true;
	// bool*ptr=&n;//ox..7b8

	// bool**aptr=&ptr;//ox..300

	// bool***bptr=&aptr;//0x...500



	// // *ptr--->n
	// cout<<n<<endl;
	// cout<<*ptr<<endl;


	// // **aptr-->n

	// cout<<n<<endl;
	// cout<<**aptr<<endl;


	// // ***bptr-->n

	// cout<<n<<endl;
	// cout<<***bptr<<endl;




	


	return 0;
}