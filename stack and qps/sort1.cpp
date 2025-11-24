#include<iostream>
#include<stack>
using namespace std;
bool comperator(int a,int b){ //4 2 

	return a>b;

}

int main(){

	int n;
	cin>>n;
	int arr[100];
	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];
	}

	
	sort(arr,arr+n,comperator);

	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<endl;
	}



	return 0;
}
